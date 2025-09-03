package tree_sitter_remi_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_remi "github.com/unknownrori/remi-tree-sitter/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_remi.Language())
	if language == nil {
		t.Errorf("Error loading Remi grammar")
	}
}
