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
      class TransformProvider;
      class Transform;
      class OrphanFrame;
      class Frame;
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
          mid_init$_f5ffdf29129ef90a,
          mid_addChild_d14538095eb65eb2,
          mid_addChild_fe4747d99aba0941,
          mid_attachTo_aa22850365ea11c9,
          mid_attachTo_d01074a86371b1f2,
          mid_getChildren_0d9551367f7ecdef,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_toString_3cffd47377eca18a,
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
