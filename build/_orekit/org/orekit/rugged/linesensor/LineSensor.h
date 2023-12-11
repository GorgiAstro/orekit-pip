#ifndef org_orekit_rugged_linesensor_LineSensor_H
#define org_orekit_rugged_linesensor_LineSensor_H

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
  }
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineDatation;
      }
      namespace los {
        class TimeDependentLOS;
      }
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class LineSensor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d6a5725cfda9eb6a,
            mid_dumpRate_10f281d777284cea,
            mid_getDate_8ef471ef852a9678,
            mid_getLOS_3c56f5b1e29b9eca,
            mid_getLOS_8bb2c64f904a2a90,
            mid_getLOSDerivatives_dbc314b6641cc90f,
            mid_getLOSDerivatives_6d63592424503b42,
            mid_getLine_b0b988f941da47d8,
            mid_getName_3cffd47377eca18a,
            mid_getNbPixels_412668abc8d889e9,
            mid_getParametersDrivers_d7cce92225eb0db2,
            mid_getPosition_f88961cca75a2c0a,
            mid_getRate_7e960cd6eee376d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LineSensor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LineSensor(const LineSensor& obj) : ::java::lang::Object(obj) {}

          LineSensor(const ::java::lang::String &, const ::org::orekit::rugged::linesensor::LineDatation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::los::TimeDependentLOS &);

          void dumpRate(jdouble) const;
          ::org::orekit::time::AbsoluteDate getDate(jdouble) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getLOS(const ::org::orekit::time::AbsoluteDate &, jdouble) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getLOS(const ::org::orekit::time::AbsoluteDate &, jint) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getLOSDerivatives(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getLOSDerivatives(const ::org::orekit::time::AbsoluteDate &, jint, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          jdouble getLine(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::lang::String getName() const;
          jint getNbPixels() const;
          ::java::util::stream::Stream getParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
          jdouble getRate(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        extern PyType_Def PY_TYPE_DEF(LineSensor);
        extern PyTypeObject *PY_TYPE(LineSensor);

        class t_LineSensor {
        public:
          PyObject_HEAD
          LineSensor object;
          static PyObject *wrap_Object(const LineSensor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
