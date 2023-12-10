#ifndef org_orekit_files_ilrs_CPF$CPFCoordinate_H
#define org_orekit_files_ilrs_CPF$CPFCoordinate_H

#include "org/orekit/utils/TimeStampedPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CPF$CPFCoordinate : public ::org::orekit::utils::TimeStampedPVCoordinates {
         public:
          enum {
            mid_init$_58c0d6ad5aca569e,
            mid_init$_b1253fc8f46fe144,
            mid_getLeap_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPF$CPFCoordinate(jobject obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPF$CPFCoordinate(const CPF$CPFCoordinate& obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {}

          CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jint);
          CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jint);

          jint getLeap() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CPF$CPFCoordinate);
        extern PyTypeObject *PY_TYPE(CPF$CPFCoordinate);

        class t_CPF$CPFCoordinate {
        public:
          PyObject_HEAD
          CPF$CPFCoordinate object;
          static PyObject *wrap_Object(const CPF$CPFCoordinate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
