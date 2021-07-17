  #include <stdio.h>
  #include <string.h>
  int main()
{
  FILE *fptr;
  int key, ch, i = 0;
  char s[100], val;
  fptr= fopen("encrypt.txt", "w");
  if (fptr == NULL)
  {
    printf("File open error.\n");
    return 0;
  }
  printf("Enter the string.\n");
  fgets(s, 100, stdin);
  printf("Enter the key to create cipher text.\n");
  scanf("%d",&key);
  while (s[i] != '\0')
  {
    ch = s[i];
    val = ch + key;
    s[i] = val;
    i++;
  }
  fputs(s, fptr);
  fclose(fptr);
  fptr = fopen("encrypt.txt", "r");
  while(1)
  {
    ch = fgetc(fptr);
    val = ch-key;
    if(feof(fptr))
      break;
    printf("%c",val);
  }
  printf("\n");
  fclose(fptr);
  return 0;
}
