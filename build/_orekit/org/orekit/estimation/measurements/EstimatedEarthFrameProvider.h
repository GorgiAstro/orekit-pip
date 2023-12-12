#ifndef org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H
#define org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
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
      class UT1Scale;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class EstimatedEarthFrameProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_397cb98b48a45c7c,
            mid_getEstimatedUT1_22bf001d2b53d119,
            mid_getPolarDriftXDriver_4194657b5e280ddc,
            mid_getPolarDriftYDriver_4194657b5e280ddc,
            mid_getPolarOffsetXDriver_4194657b5e280ddc,
            mid_getPolarOffsetYDriver_4194657b5e280ddc,
            mid_getPrimeMeridianDriftDriver_4194657b5e280ddc,
            mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc,
            mid_getStaticTransform_7265a2d9c3b9a38a,
            mid_getStaticTransform_68fd5b9bb9184393,
            mid_getTransform_df04e3927954349e,
            mid_getTransform_e70631ba002d9a32,
            mid_getTransform_4c0f713f503cbfed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimatedEarthFrameProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimatedEarthFrameProvider(const EstimatedEarthFrameProvider& obj) : ::java::lang::Object(obj) {}

          static jdouble EARTH_ANGULAR_VELOCITY;

          EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale &);

          ::org::orekit::time::UT1Scale getEstimatedUT1() const;
          ::org::orekit::utils::ParameterDriver getPolarDriftXDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarDriftYDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarOffsetXDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarOffsetYDriver() const;
          ::org::orekit::utils::ParameterDriver getPrimeMeridianDriftDriver() const;
          ::org::orekit::utils::ParameterDriver getPrimeMeridianOffsetDriver() const;
          ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::frames::Transform getTransform(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &, jint, const ::java::util::Map &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(EstimatedEarthFrameProvider);
        extern PyTypeObject *PY_TYPE(EstimatedEarthFrameProvider);

        class t_EstimatedEarthFrameProvider {
        public:
          PyObject_HEAD
          EstimatedEarthFrameProvider object;
          static PyObject *wrap_Object(const EstimatedEarthFrameProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
