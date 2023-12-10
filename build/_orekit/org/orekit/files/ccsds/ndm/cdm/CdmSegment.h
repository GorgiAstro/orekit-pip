#ifndef org_orekit_files_ccsds_ndm_cdm_CdmSegment_H
#define org_orekit_files_ccsds_ndm_cdm_CdmSegment_H

#include "org/orekit/files/ccsds/section/Segment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmData;
            class CdmMetadata;
          }
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

            class CdmSegment : public ::org::orekit::files::ccsds::section::Segment {
             public:
              enum {
                mid_init$_d60d68b83bd2720c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmSegment(jobject obj) : ::org::orekit::files::ccsds::section::Segment(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmSegment(const CdmSegment& obj) : ::org::orekit::files::ccsds::section::Segment(obj) {}

              CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata &, const ::org::orekit::files::ccsds::ndm::cdm::CdmData &);
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
            extern PyType_Def PY_TYPE_DEF(CdmSegment);
            extern PyTypeObject *PY_TYPE(CdmSegment);

            class t_CdmSegment {
            public:
              PyObject_HEAD
              CdmSegment object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_CdmSegment *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CdmSegment&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CdmSegment&, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
