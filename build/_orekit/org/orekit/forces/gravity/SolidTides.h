#ifndef org_orekit_forces_gravity_SolidTides_H
#define org_orekit_forces_gravity_SolidTides_H

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
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class IERSConventions;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace time {
      class UT1Scale;
    }
    namespace frames {
      class Frame;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
      class ForceModel;
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
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        class SolidTides : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9a5efe28259cffe6,
            mid_init$_46c73e75ea7ca7a5,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getParametersDrivers_d751c1a57012b438,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SolidTides(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SolidTides(const SolidTides& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_POINTS;
          static jdouble DEFAULT_STEP;

          SolidTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const JArray< ::org::orekit::bodies::CelestialBody > &);
          SolidTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, jboolean, jdouble, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const JArray< ::org::orekit::bodies::CelestialBody > &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        extern PyType_Def PY_TYPE_DEF(SolidTides);
        extern PyTypeObject *PY_TYPE(SolidTides);

        class t_SolidTides {
        public:
          PyObject_HEAD
          SolidTides object;
          static PyObject *wrap_Object(const SolidTides&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
