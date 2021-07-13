#include <iostream>
#include <memory>
#include <string>
#include <vector>

class sizeAble {
    int size_;

public:
    virtual void setSize (int size) = 0;
    virtual int getSize () = 0;
};

class nameAble {
    int name_;
public:
    virtual void setName (std::string name) = 0;
    virtual std::string getName () = 0;
};

class Bird {
public:    
    virtual void sing () = 0; 
};

class Sparrow : public Bird,
                public sizeAble {
int length_ {10};

public:
    void sing () override {
        std::cout << "chirp, chirp\n";
    }
    void setSize (int size) override {
        length_ = size;
    }
    int getSize () override {
        return length_;
    }
};

class Goose : public Bird,
              public nameAble {
std::string name_ {"Langusta"};

public:
    void sing () override {
        std::cout << "Honk, honk\n";
    }
    void setName (std::string name) override {
        name_ = name;
    }
    std::string getName() override {
        return name_;
    }
};

class Hen : public Bird,
            public sizeAble {
int high_;

public:
    void sing () override {
        std::cout << "Cluck, cluck\n";
    }

    void setSize (int size) override {
        high_ = size;
    }

    int getSize () override {
        return high_;
    }
};

int main() {
    std::shared_ptr <Bird> sparrow = std::make_shared <Sparrow> ();
        sparrow -> sing();
    std::shared_ptr<sizeAble> sparrow2 = std::make_shared <Sparrow>();
        sparrow2 -> getSize();
}
/*    
    std::vector<std::shared_ptr<Bird>> birds_;
        birds_.push_back(std::make_shared <Sparrow>() );
        birds_.push_back(std::make_shared <Goose>() );
        birds_.push_back(std::make_shared <Hen>() );
    //for (const auto& el : birds_) {
        //
        std::cout << birds_[0] -> sing() << '\n'; 
        //std::cout << birds_[0] -> getSize() << '\n';
        
        //el -> size();
        //if(Sparrow* sparrow = dynamic_cast<Sparrow*>(el)){
        //sparrow->setLenght(4);
//    }
}


    //std::cout << sparrow -> getLength(); 
    //std::cout << birds_[1] -> getName(); 
    //std::cout << birds_[2] -> getHigh(); 
    
    return 0;
}
 std::vector<std::unique_ptr<Bird>> birds;
        birds.push_back(std::move(std::make_unique<Sparrow>()));
        birds.push_back(std::move(std::make_unique<Goose>()));
        birds.push_back(std::move(std::make_unique<Hen>()));
    for (const auto& el : birds) {
        //el -> sing();
        if(Sparrow* sparrow = dynamic_cast<Sparrow*>(el.get())) {
        sparrow->setLength(4);
        std::cout << sparrow->getLength();
        }
    }



*/