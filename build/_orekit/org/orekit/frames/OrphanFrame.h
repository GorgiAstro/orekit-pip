#ifndef org_orekit_frames_OrphanFrame_H
#define org_orekit_frames_OrphanFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
      class OrphanFrame;
      class Frame;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class OrphanFrame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_734b91ac30d5f9b4,
          mid_addChild_55457428e103e443,
          mid_addChild_2f2ff8e343e2ff3d,
          mid_attachTo_8aedde5212fef9e7,
          mid_attachTo_7a4ba1fb340669bc,
          mid_getChildren_e62d3bb06d56d7e3,
          mid_getFrame_2c51111cc6894ba1,
          mid_toString_1c1fa1e935d6cdcf,
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
