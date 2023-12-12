#ifndef org_orekit_forces_gravity_OceanTides_H
#define org_orekit_forces_gravity_OceanTides_H

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
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
      class ForceModel;
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
      class IERSConventions;
    }
    namespace time {
      class UT1Scale;
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
            mid_init$_1837be424f5e21da,
            mid_init$_fce18387073bd04d,
            mid_init$_0a43ed81d0ca6cd3,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getParametersDrivers_0d9551367f7ecdef,
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
