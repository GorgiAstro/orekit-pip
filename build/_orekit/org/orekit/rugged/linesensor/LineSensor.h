#ifndef org_orekit_rugged_linesensor_LineSensor_H
#define org_orekit_rugged_linesensor_LineSensor_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineDatation;
      }
      namespace utils {
        class DerivativeGenerator;
      }
      namespace los {
        class TimeDependentLOS;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
            mid_init$_8dd57cbeca7ea1c5,
            mid_dumpRate_17db3a65980d3441,
            mid_getDate_149a9211a037d799,
            mid_getLOS_d13e85cf520666cb,
            mid_getLOS_0967b903dc4355cb,
            mid_getLOSDerivatives_6c0d2d70ff47f0b3,
            mid_getLOSDerivatives_2daacf58d695a774,
            mid_getLine_bf1d7732f1acb697,
            mid_getName_11b109bd155ca898,
            mid_getNbPixels_570ce0828f81a2c1,
            mid_getParametersDrivers_20f6d2b462aaef4b,
            mid_getPosition_d52645e0d4c07563,
            mid_getRate_dcbc7ce2902fa136,
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
