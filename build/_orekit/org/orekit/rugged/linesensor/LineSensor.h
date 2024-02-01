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
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace los {
        class TimeDependentLOS;
      }
      namespace linesensor {
        class LineDatation;
      }
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
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
            mid_init$_e083163155b5335c,
            mid_dumpRate_1ad26e8c8c0cd65b,
            mid_getDate_d2854c25a21df51f,
            mid_getLOS_1f1ccf631d2e4b23,
            mid_getLOS_d085661cbb0e1601,
            mid_getLOSDerivatives_2e4776f8f6c99ef4,
            mid_getLOSDerivatives_fa4b109980b8e155,
            mid_getLine_209f08246d708042,
            mid_getName_d2c8eb4129821f0e,
            mid_getNbPixels_d6ab429752e7c267,
            mid_getParametersDrivers_11e4ca8182c1933d,
            mid_getPosition_032312bdeb3f2f93,
            mid_getRate_bf28ed64d6e8576b,
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
