#ifndef org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H
#define org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
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
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
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
            mid_init$_e5fa6e9d2e3c3072,
            mid_getEstimatedUT1_03c3c9443d7f95bb,
            mid_getPolarDriftXDriver_a59daa5e273117e1,
            mid_getPolarDriftYDriver_a59daa5e273117e1,
            mid_getPolarOffsetXDriver_a59daa5e273117e1,
            mid_getPolarOffsetYDriver_a59daa5e273117e1,
            mid_getPrimeMeridianDriftDriver_a59daa5e273117e1,
            mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1,
            mid_getStaticTransform_5f13614b572308e8,
            mid_getStaticTransform_09ace34b8a3460b2,
            mid_getTransform_976d4bc81671ce42,
            mid_getTransform_7a8ca6856fe3fc9e,
            mid_getTransform_dc749462c96219b1,
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
