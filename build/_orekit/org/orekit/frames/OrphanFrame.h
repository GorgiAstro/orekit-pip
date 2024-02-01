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
      class Transform;
      class TransformProvider;
      class Frame;
      class OrphanFrame;
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
          mid_init$_105e1eadb709d9ac,
          mid_addChild_103b10d18c6de761,
          mid_addChild_c0701622964fbebb,
          mid_attachTo_8f3203d86728106c,
          mid_attachTo_50023fae0ce07cf5,
          mid_getChildren_d751c1a57012b438,
          mid_getFrame_cb151471db4570f0,
          mid_toString_d2c8eb4129821f0e,
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
