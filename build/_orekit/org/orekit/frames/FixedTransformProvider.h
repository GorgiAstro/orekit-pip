#ifndef org_orekit_frames_FixedTransformProvider_H
#define org_orekit_frames_FixedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
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

      class FixedTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6eb86d2b2bbcc346,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FixedTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FixedTransformProvider(const FixedTransformProvider& obj) : ::java::lang::Object(obj) {}

        FixedTransformProvider(const ::org::orekit::frames::Transform &);

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
      extern PyType_Def PY_TYPE_DEF(FixedTransformProvider);
      extern PyTypeObject *PY_TYPE(FixedTransformProvider);

      class t_FixedTransformProvider {
      public:
        PyObject_HEAD
        FixedTransformProvider object;
        static PyObject *wrap_Object(const FixedTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
