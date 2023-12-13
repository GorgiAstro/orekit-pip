#ifndef org_orekit_rugged_linesensor_LineSensor_H
#define org_orekit_rugged_linesensor_LineSensor_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
          class Vector3D;
          class FieldVector3D;
        }
      }
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
            mid_init$_1cf725ce5c7fae72,
            mid_dumpRate_8ba9fe7a847cecad,
            mid_getDate_f359a0110559347a,
            mid_getLOS_6fb34ebfd1928e89,
            mid_getLOS_81db334e9ae8d0f0,
            mid_getLOSDerivatives_4d0e33e8d7307935,
            mid_getLOSDerivatives_8c1346b73fbd45ff,
            mid_getLine_fd347811007a6ba3,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getNbPixels_55546ef6a647f39b,
            mid_getParametersDrivers_14e21bf777ff0ccf,
            mid_getPosition_8b724f8b4fdad1a2,
            mid_getRate_04fd0666b613d2ab,
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
