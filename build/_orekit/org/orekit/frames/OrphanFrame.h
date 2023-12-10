#ifndef org_orekit_frames_OrphanFrame_H
#define org_orekit_frames_OrphanFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class OrphanFrame;
      class TransformProvider;
      class Frame;
      class Transform;
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
          mid_init$_d0bc48d5b00dc40c,
          mid_addChild_74682fd3440466c6,
          mid_addChild_e3cd872d552272ec,
          mid_attachTo_b7b2e14d2a23701d,
          mid_attachTo_faa407a92cccaadd,
          mid_getChildren_2afa36052df4765d,
          mid_getFrame_b86f9f61d97a7244,
          mid_toString_11b109bd155ca898,
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
