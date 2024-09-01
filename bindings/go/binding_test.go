package tree_sitter_qbe_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-qbe"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_qbe.Language())
	if language == nil {
		t.Errorf("Error loading Qbe grammar")
	}
}
