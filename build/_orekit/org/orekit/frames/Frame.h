#ifndef org_orekit_frames_Frame_H
#define org_orekit_frames_Frame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class TransformProvider;
      class Frame;
      class FieldTransform;
      class Transform;
      class StaticTransform;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_03e04995a6531dd6,
          mid_init$_96b1a690846f391d,
          mid_init$_066cbc733c0a5e57,
          mid_init$_f331b5c2e1d602c8,
          mid_getAncestor_6f93408d33c3a1aa,
          mid_getDepth_570ce0828f81a2c1,
          mid_getFrozenFrame_96ed7581df7a3e75,
          mid_getName_11b109bd155ca898,
          mid_getParent_b86f9f61d97a7244,
          mid_getRoot_b86f9f61d97a7244,
          mid_getStaticTransformTo_8048aebc71d12954,
          mid_getStaticTransformTo_a413a039e46f1166,
          mid_getTransformProvider_b22bdbe9f9cd12d5,
          mid_getTransformTo_1ca8a058da89e769,
          mid_getTransformTo_5d0e5fed1e48b4f7,
          mid_isChildOf_b6ce2293f1753032,
          mid_isPseudoInertial_b108b35ef48e27bd,
          mid_toString_11b109bd155ca898,
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
