#ifndef org_orekit_forces_empirical_TimeSpanParametricAcceleration_H
#define org_orekit_forces_empirical_TimeSpanParametricAcceleration_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class TimeSpanMap$Span;
      class ParameterDriver;
      class TimeSpanMap;
    }
    namespace forces {
      class ForceModel;
      namespace empirical {
        class AccelerationModel;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
            mid_init$_043e9efe19e3b3cd,
            mid_init$_292f4a8302d10a85,
            mid_acceleration_8954761face5e1a7,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_addAccelerationModelValidAfter_03b4f7d8bf49d4bf,
            mid_addAccelerationModelValidBefore_03b4f7d8bf49d4bf,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_extractAccelerationModelRange_56889532bb31616d,
            mid_extractParameters_020d17bb8c285475,
            mid_extractParameters_547c908eaeea187e,
            mid_getAccelerationModel_7cbe637ff309e336,
            mid_getAccelerationModelSpan_561a18a65c5f000d,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getFirstSpan_971209c2bf2033e7,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_init_826b4eda94da4e78,
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
