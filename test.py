1+1
print(1+1)
def main():
	for n in range(1, 21):
		kind = "chẵn" if n % 2 == 0 else "lẻ"
		print(f"{n} là số {kind}")


if __name__ == "__main__":
	main()