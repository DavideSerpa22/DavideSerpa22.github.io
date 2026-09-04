def media(voti):
    if not voti:
        return 0.0
    return sum(voti) / len(voti)


def main():
    voti = [19, 24, 27, 30]
    print(f"Media: {media(voti):.2f}")


if __name__ == "__main__":
    main()
