#ifndef org_orekit_frames_ShiftingTransformProvider_H
#define org_orekit_frames_ShiftingTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
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

      class ShiftingTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_eb9cd2c2bb77ce9f,
          mid_getGridPoints_412668abc8d889e9,
          mid_getRawProvider_5b1059d129debef8,
          mid_getStaticTransform_7265a2d9c3b9a38a,
          mid_getStaticTransform_68fd5b9bb9184393,
          mid_getStep_557b8123390d8d0c,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ShiftingTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ShiftingTransformProvider(const ShiftingTransformProvider& obj) : ::java::lang::Object(obj) {}

        ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, jint, jdouble, jint, jdouble, jdouble);

        jint getGridPoints() const;
        ::org::orekit::frames::TransformProvider getRawProvider() const;
        ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
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
      extern PyType_Def PY_TYPE_DEF(ShiftingTransformProvider);
      extern PyTypeObject *PY_TYPE(ShiftingTransformProvider);

      class t_ShiftingTransformProvider {
      public:
        PyObject_HEAD
        ShiftingTransformProvider object;
        static PyObject *wrap_Object(const ShiftingTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
