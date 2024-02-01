#ifndef org_orekit_forces_empirical_TimeSpanParametricAcceleration_H
#define org_orekit_forces_empirical_TimeSpanParametricAcceleration_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace utils {
      class TimeSpanMap;
      class TimeSpanMap$Span;
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class TimeSpanParametricAcceleration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d120eee40e024d34,
            mid_init$_fb104f3162f22c26,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_addAccelerationModelValidAfter_97826c43d9cbc7e2,
            mid_addAccelerationModelValidBefore_97826c43d9cbc7e2,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_extractAccelerationModelRange_d943d113c5f78644,
            mid_extractParameters_f6f6c8fcf1e496fb,
            mid_extractParameters_f4e70a6b1a1cf5f6,
            mid_getAccelerationModel_871196f960e454d6,
            mid_getAccelerationModelSpan_7b19e06f3155cde2,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getFirstSpan_ea49fa2ad441b95d,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_init_14deaae988292d42,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeSpanParametricAcceleration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeSpanParametricAcceleration(const TimeSpanParametricAcceleration& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DATE_AFTER;
          static ::java::lang::String *DATE_BEFORE;

          TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jboolean, const ::org::orekit::forces::empirical::AccelerationModel &);
          TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::empirical::AccelerationModel &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel &, const ::org::orekit::time::AbsoluteDate &) const;
          void addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel &, const ::org::orekit::time::AbsoluteDate &) const;
          jboolean dependsOnPositionOnly() const;
          ::org::orekit::utils::TimeSpanMap extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::forces::empirical::AccelerationModel getAccelerationModel(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap$Span getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
          ::java::util::List getParametersDrivers() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        extern PyType_Def PY_TYPE_DEF(TimeSpanParametricAcceleration);
        extern PyTypeObject *PY_TYPE(TimeSpanParametricAcceleration);

        class t_TimeSpanParametricAcceleration {
        public:
          PyObject_HEAD
          TimeSpanParametricAcceleration object;
          static PyObject *wrap_Object(const TimeSpanParametricAcceleration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
