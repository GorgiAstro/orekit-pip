#ifndef org_orekit_files_ccsds_ndm_cdm_StateVector_H
#define org_orekit_files_ccsds_ndm_cdm_StateVector_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
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
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class StateVector : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getPositionVector_17a952530a808943,
                mid_getVelocityVector_17a952530a808943,
                mid_setX_77e0f9a1f260e2e5,
                mid_setXdot_77e0f9a1f260e2e5,
                mid_setY_77e0f9a1f260e2e5,
                mid_setYdot_77e0f9a1f260e2e5,
                mid_setZ_77e0f9a1f260e2e5,
                mid_setZdot_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StateVector(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StateVector(const StateVector& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              StateVector();

              ::org::hipparchus::geometry::euclidean::threed::Vector3D getPositionVector() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocityVector() const;
              void setX(jdouble) const;
              void setXdot(jdouble) const;
              void setY(jdouble) const;
              void setYdot(jdouble) const;
              void setZ(jdouble) const;
              void setZdot(jdouble) const;
              void validate(jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(StateVector);
            extern PyTypeObject *PY_TYPE(StateVector);

            class t_StateVector {
            public:
              PyObject_HEAD
              StateVector object;
              static PyObject *wrap_Object(const StateVector&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
