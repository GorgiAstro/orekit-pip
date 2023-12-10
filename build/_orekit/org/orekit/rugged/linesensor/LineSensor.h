#ifndef org_orekit_rugged_linesensor_LineSensor_H
#define org_orekit_rugged_linesensor_LineSensor_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
      namespace linesensor {
        class LineDatation;
      }
      namespace los {
        class TimeDependentLOS;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
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
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_479a21e7eda36c51,
            mid_dumpRate_77e0f9a1f260e2e5,
            mid_getDate_a76f1ca2cc1b76e5,
            mid_getLOS_c2e737cda6af3a23,
            mid_getLOS_969c0495d6f5d7aa,
            mid_getLOSDerivatives_8a5be8518b5b0d00,
            mid_getLOSDerivatives_8118db2f928a9f34,
            mid_getLine_e912d21057defe63,
            mid_getName_0090f7797e403f43,
            mid_getNbPixels_f2f64475e4580546,
            mid_getParametersDrivers_a68a17dd093f796d,
            mid_getPosition_17a952530a808943,
            mid_getRate_0ba5fed9597b693e,
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
