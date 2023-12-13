#ifndef org_orekit_forces_empirical_TimeSpanParametricAcceleration_H
#define org_orekit_forces_empirical_TimeSpanParametricAcceleration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
      class TimeSpanMap;
    }
    namespace forces {
      class ForceModel;
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_4c3161fe77d68ecd,
            mid_init$_5e38cdb9559e0e6a,
            mid_acceleration_20bded0292328743,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_addAccelerationModelValidAfter_7576a11e87bcb804,
            mid_addAccelerationModelValidBefore_7576a11e87bcb804,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_extractAccelerationModelRange_2917731b47ff4d6e,
            mid_extractParameters_5417afc1212505b6,
            mid_extractParameters_afb90c8392ccc216,
            mid_getAccelerationModel_35bbad49226ddaea,
            mid_getAccelerationModelSpan_d9699fc4c4f11b26,
            mid_getEventDetectors_14e21bf777ff0ccf,
            mid_getFieldEventDetectors_283ad33581c047a0,
            mid_getFirstSpan_5290b219f9ebfd63,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_init_2d7f9a496c7e9781,
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
