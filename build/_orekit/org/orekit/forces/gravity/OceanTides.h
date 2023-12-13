#ifndef org_orekit_forces_gravity_OceanTides_H
#define org_orekit_forces_gravity_OceanTides_H

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
          class GravityFields;
        }
      }
    }
    namespace time {
      class UT1Scale;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
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

        class OceanTides : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b969bee9b70083a9,
            mid_init$_068d507e061d4ea6,
            mid_init$_1dd2a1faf37eb57e,
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

          explicit OceanTides(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OceanTides(const OceanTides& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_POINTS;
          static jdouble DEFAULT_STEP;

          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const ::org::orekit::forces::gravity::potential::GravityFields &);

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
        extern PyType_Def PY_TYPE_DEF(OceanTides);
        extern PyTypeObject *PY_TYPE(OceanTides);

        class t_OceanTides {
        public:
          PyObject_HEAD
          OceanTides object;
          static PyObject *wrap_Object(const OceanTides&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
