#ifndef org_orekit_frames_Frame_H
#define org_orekit_frames_Frame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Frame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c6446c6a66066a58,
          mid_init$_23023eb409a55d5d,
          mid_init$_9ce69abbd2d1e9a2,
          mid_init$_6546c0395cc39710,
          mid_getAncestor_afef5fc5bd79fa39,
          mid_getDepth_55546ef6a647f39b,
          mid_getFrozenFrame_7ad0d084f0482520,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getParent_2c51111cc6894ba1,
          mid_getRoot_2c51111cc6894ba1,
          mid_getStaticTransformTo_b4721e0f5ffc3fd2,
          mid_getStaticTransformTo_d4e6616065ea0772,
          mid_getTransformProvider_51018934a5745bab,
          mid_getTransformTo_6ac19f02e66fc896,
          mid_getTransformTo_72dd5326d829caa3,
          mid_isChildOf_388bd29d78cd2abf,
          mid_isPseudoInertial_9ab94ac1dc23b105,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frame(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frame(const Frame& obj) : ::java::lang::Object(obj) {}

        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &, jboolean);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &, jboolean);

        Frame getAncestor(jint) const;
        jint getDepth() const;
        Frame getFrozenFrame(const Frame &, const ::org::orekit::time::AbsoluteDate &, const ::java::lang::String &) const;
        ::java::lang::String getName() const;
        Frame getParent() const;
        static Frame getRoot();
        ::org::orekit::frames::StaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::TransformProvider getTransformProvider() const;
        ::org::orekit::frames::Transform getTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jboolean isChildOf(const Frame &) const;
        jboolean isPseudoInertial() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Frame);
      extern PyTypeObject *PY_TYPE(Frame);

      class t_Frame {
      public:
        PyObject_HEAD
        Frame object;
        static PyObject *wrap_Object(const Frame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
