/**
 * Binary tree program for OS.
 */
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char *word;
  int count;
  struct node *leftNode, *rightNode;
  } node;
  
node *root;
  
void insert(node* currentNode,char *string){
  node *temp = NULL;

  temp = (node*)malloc(sizeof(node));
  temp->leftNode = temp->rightNode = NULL;
  temp->word = string;
  temp->count = 1;
    
  if(root = NULL){
    root = temp;
    return;
  }

  if(strcmp(temp->word,currentNode->word) < 0) {
    insert(currentNode->leftNode,temp->word);
  } else if(strcmp(temp->word,currentNode->word) > 0) {
    insert(currentNode->rightNode,temp->word);
  } else {
    currentNode->count++;
  }
}

void deltree(node * tree) {
 if (tree) {
   deltree(tree->leftNode);
   deltree(tree->rightNode);
   free(tree);
  }
}

void readWords(const char *filename, node *root, int max_number_of_words)
{
    FILE *f = fopen(filename, "rt");
    int i;
    char temp[100]; // assumption words are not longer than 100

    for (i = 0; i < max_number_of_words; ++i)
    {
        // Read a word from the file
        if (fscanf(f, "%s", temp) != 1)
            break;
        // "!=1" checks for end-of-file

        // Allocate memory for the word and add to tree
        insert(root, strdup(temp));
    }
    fclose(f);
}

void outputFile(node *tree) {
  
}

int main(int *argc,char **argv) {
  exit(0);
}