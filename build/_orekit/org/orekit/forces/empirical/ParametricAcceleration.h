#ifndef org_orekit_forces_empirical_ParametricAcceleration_H
#define org_orekit_forces_empirical_ParametricAcceleration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
      class ForceModel;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class ParametricAcceleration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d120eee40e024d34,
            mid_init$_fb104f3162f22c26,
            mid_acceleration_9816b8f76e94356a,
            mid_acceleration_5e147f44c28a35c9,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_init_14deaae988292d42,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParametricAcceleration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParametricAcceleration(const ParametricAcceleration& obj) : ::java::lang::Object(obj) {}

          ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jboolean, const ::org::orekit::forces::empirical::AccelerationModel &);
          ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::empirical::AccelerationModel &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
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
        extern PyType_Def PY_TYPE_DEF(ParametricAcceleration);
        extern PyTypeObject *PY_TYPE(ParametricAcceleration);

        class t_ParametricAcceleration {
        public:
          PyObject_HEAD
          ParametricAcceleration object;
          static PyObject *wrap_Object(const ParametricAcceleration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
