#ifndef org_orekit_frames_Frame_H
#define org_orekit_frames_Frame_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
      class TransformProvider;
      class FieldStaticTransform;
      class Frame;
      class StaticTransform;
      class FieldTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Frame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_d8cb329c586d12d2,
          mid_init$_544a46f568cb82e6,
          mid_init$_616b39805dc3fd53,
          mid_init$_bf7d1562b348c3f4,
          mid_getAncestor_afa0c8dddbea8501,
          mid_getDepth_412668abc8d889e9,
          mid_getFrozenFrame_3ca3ca1c6544a8cc,
          mid_getName_3cffd47377eca18a,
          mid_getParent_6c9bc0a928c56d4e,
          mid_getRoot_6c9bc0a928c56d4e,
          mid_getStaticTransformTo_7a25a52eda73c1be,
          mid_getStaticTransformTo_26fe8228a784e36b,
          mid_getTransformProvider_5b1059d129debef8,
          mid_getTransformTo_0c8fad60d8b4d965,
          mid_getTransformTo_b55ae1e761b9de03,
          mid_isChildOf_f73c6a4bba5acc20,
          mid_isPseudoInertial_89b302893bdbe1f1,
          mid_toString_3cffd47377eca18a,
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
