#ifndef org_orekit_frames_InterpolatingTransformProvider_H
#define org_orekit_frames_InterpolatingTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class AngularDerivativesFilter;
    }
    namespace frames {
      class FieldTransform;
      class Transform;
      class TransformProvider;
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
          mid_init$_f96a885f66859d5c,
          mid_getGridPoints_d6ab429752e7c267,
          mid_getRawProvider_fd7cd467d992431a,
          mid_getStep_9981f74b2d109da6,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
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
