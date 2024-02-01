#ifndef org_orekit_frames_TransformProvider_H
#define org_orekit_frames_TransformProvider_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class TransformProvider : public ::java::io::Serializable {
       public:
        enum {
          mid_getStaticTransform_6e492420312934f1,
          mid_getStaticTransform_3b5ee2ab7cc035a5,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TransformProvider(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TransformProvider(const TransformProvider& obj) : ::java::io::Serializable(obj) {}

        ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::Transform getTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(TransformProvider);
      extern PyTypeObject *PY_TYPE(TransformProvider);

      class t_TransformProvider {
      public:
        PyObject_HEAD
        TransformProvider object;
        static PyObject *wrap_Object(const TransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
