#ifndef org_orekit_frames_InterpolatingTransformProvider_H
#define org_orekit_frames_InterpolatingTransformProvider_H

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
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
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

      class InterpolatingTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_eb9cd2c2bb77ce9f,
          mid_getGridPoints_412668abc8d889e9,
          mid_getRawProvider_5b1059d129debef8,
          mid_getStep_557b8123390d8d0c,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit InterpolatingTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        InterpolatingTransformProvider(const InterpolatingTransformProvider& obj) : ::java::lang::Object(obj) {}

        InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, jint, jdouble, jint, jdouble, jdouble);

        jint getGridPoints() const;
        ::org::orekit::frames::TransformProvider getRawProvider() const;
        jdouble getStep() const;
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
      extern PyType_Def PY_TYPE_DEF(InterpolatingTransformProvider);
      extern PyTypeObject *PY_TYPE(InterpolatingTransformProvider);

      class t_InterpolatingTransformProvider {
      public:
        PyObject_HEAD
        InterpolatingTransformProvider object;
        static PyObject *wrap_Object(const InterpolatingTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
