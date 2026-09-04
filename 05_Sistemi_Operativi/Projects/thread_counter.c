#include <pthread.h>
#include <stdio.h>

static long counter = 0;
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

typedef struct {
    int iterations;
} WorkerArgs;

void* worker(void* arg) {
    const WorkerArgs* args = (const WorkerArgs*)arg;
    for (int i = 0; i < args->iterations; ++i) {
        pthread_mutex_lock(&mutex);
        ++counter;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(void) {
    pthread_t threads[2];
    WorkerArgs args = {.iterations = 100000};

    pthread_create(&threads[0], NULL, worker, &args);
    pthread_create(&threads[1], NULL, worker, &args);
    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    printf("Counter: %ld\n", counter);
    pthread_mutex_destroy(&mutex);
    return 0;
}
