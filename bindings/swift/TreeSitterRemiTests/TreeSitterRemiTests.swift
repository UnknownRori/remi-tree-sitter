import XCTest
import SwiftTreeSitter
import TreeSitterRemi

final class TreeSitterRemiTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_remi())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Remi grammar")
    }
}
