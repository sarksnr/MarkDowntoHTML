#pragma once

class HeadingNode;
class ParagraphNode;
class Document;

class NodeVisitor {
    public:
        virtual ~NodeVisitor() = default;
        virtual void visit(HeadingNode& node) = 0;
        virtual void visit(ParagraphNode& node) = 0;
        virtual void visit(Document& node) = 0;
};