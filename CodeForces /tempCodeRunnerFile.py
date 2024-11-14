def count():
    c = input()
    
    for i in c:
        if i == 'A' or i == 'Q' or i == '9':
            print("YES")
            return  
    
    print("NO")

def main():
    count()

if __name__ == "__main__":
    main()
