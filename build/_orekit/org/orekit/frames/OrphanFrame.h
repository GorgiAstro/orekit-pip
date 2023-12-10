#ifndef org_orekit_frames_OrphanFrame_H
#define org_orekit_frames_OrphanFrame_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
      class OrphanFrame;
      class TransformProvider;
      class Transform;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class OrphanFrame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e939c6558ae8d313,
          mid_addChild_c5d94383981965f9,
          mid_addChild_703b4c4a4f2c49c2,
          mid_attachTo_b2f70a458edb5ee8,
          mid_attachTo_22e551ec162d32ec,
          mid_getChildren_a6156df500549a58,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_toString_0090f7797e403f43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrphanFrame(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrphanFrame(const OrphanFrame& obj) : ::java::lang::Object(obj) {}

        OrphanFrame(const ::java::lang::String &);

        void addChild(const OrphanFrame &, const ::org::orekit::frames::Transform &, jboolean) const;
        void addChild(const OrphanFrame &, const ::org::orekit::frames::TransformProvider &, jboolean) const;
        void attachTo(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Transform &, jboolean) const;
        void attachTo(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::TransformProvider &, jboolean) const;
        ::java::util::List getChildren() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(OrphanFrame);
      extern PyTypeObject *PY_TYPE(OrphanFrame);

      class t_OrphanFrame {
      public:
        PyObject_HEAD
        OrphanFrame object;
        static PyObject *wrap_Object(const OrphanFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
