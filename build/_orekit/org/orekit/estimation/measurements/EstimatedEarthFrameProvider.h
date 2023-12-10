#ifndef org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H
#define org_orekit_estimation_measurements_EstimatedEarthFrameProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
      class StaticTransform;
    }
    namespace time {
      class UT1Scale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
            mid_init$_a578b266e00b830c,
            mid_getEstimatedUT1_b384d97b3c055d24,
            mid_getPolarDriftXDriver_a25ed222178aa59f,
            mid_getPolarDriftYDriver_a25ed222178aa59f,
            mid_getPolarOffsetXDriver_a25ed222178aa59f,
            mid_getPolarOffsetYDriver_a25ed222178aa59f,
            mid_getPrimeMeridianDriftDriver_a25ed222178aa59f,
            mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f,
            mid_getStaticTransform_edee248bbd22a723,
            mid_getStaticTransform_eae0db96fe973887,
            mid_getTransform_687985c59478d29c,
            mid_getTransform_f7bf3269025b86c3,
            mid_getTransform_e79c22b40d6fa7e0,
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
