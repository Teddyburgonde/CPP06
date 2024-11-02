**Notions importantes**

**Utilisation de static devant une methode**

```cpp
class ScalarConverter
{
	public:
		static void	is_char(char c);
};

int main()
{
	ScalarConverter::is_char('Z');
}

```

static permet de dire que la methode appartient directement a la class 
elle meme (ScalarConverter), elle n'est plus qu'un instance de la class.
Donc dans le main on n'a pas besoin de creer d'objet.

**Ex01**

![Screenshot from 2024-11-02 11-53-43](https://github.com/user-attachments/assets/53c8a974-76b4-4d08-bb93-6d91e268a4bb)
