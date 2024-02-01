#ifndef org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H
#define org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
      class TransformProvider;
      class StaticTransform;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class UT1Scale;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
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
            mid_init$_91f88ad6e1a97332,
            mid_getEstimatedUT1_ac848fda7f5ef1ad,
            mid_getPolarDriftXDriver_7daccb22665e511b,
            mid_getPolarDriftYDriver_7daccb22665e511b,
            mid_getPolarOffsetXDriver_7daccb22665e511b,
            mid_getPolarOffsetYDriver_7daccb22665e511b,
            mid_getPrimeMeridianDriftDriver_7daccb22665e511b,
            mid_getPrimeMeridianOffsetDriver_7daccb22665e511b,
            mid_getStaticTransform_6e492420312934f1,
            mid_getStaticTransform_3b5ee2ab7cc035a5,
            mid_getTransform_02ca17ac51b6a4b2,
            mid_getTransform_286745ef54e0a7f6,
            mid_getTransform_f7a260b8d34f2d85,
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
