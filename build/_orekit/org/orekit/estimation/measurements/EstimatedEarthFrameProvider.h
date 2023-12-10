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
    namespace time {
      class UT1Scale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class FieldStaticTransform;
      class StaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
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
            mid_init$_954476a37d8406bd,
            mid_getEstimatedUT1_2493bae90e875538,
            mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f,
            mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f,
            mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f,
            mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f,
            mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f,
            mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f,
            mid_getStaticTransform_96493aacdf1acda1,
            mid_getStaticTransform_490485462b5938a0,
            mid_getTransform_d55545a64ea4a9a7,
            mid_getTransform_0b4f24249033b631,
            mid_getTransform_0cded0dfc13641b5,
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
