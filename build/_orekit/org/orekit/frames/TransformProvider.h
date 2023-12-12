#ifndef org_orekit_frames_TransformProvider_H
#define org_orekit_frames_TransformProvider_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
      class FieldTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
          mid_getStaticTransform_7265a2d9c3b9a38a,
          mid_getStaticTransform_68fd5b9bb9184393,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
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
