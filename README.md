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