#ifndef org_orekit_forces_gravity_SolidTides_H
#define org_orekit_forces_gravity_SolidTides_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace utils {
      class IERSConventions;
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class UT1Scale;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class CelestialBody;
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
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
            mid_init$_273da68e0002e582,
            mid_init$_ebc119cf1633fa6f,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_acceleration_20bded0292328743,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getEventDetectors_14e21bf777ff0ccf,
            mid_getFieldEventDetectors_283ad33581c047a0,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
