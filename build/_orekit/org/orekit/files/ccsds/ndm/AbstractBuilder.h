#ifndef org_orekit_files_ccsds_ndm_AbstractBuilder_H
#define org_orekit_files_ccsds_ndm_AbstractBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          class AbstractBuilder;
          namespace tdm {
            class RangeUnitsConverter;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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

          class AbstractBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_f657aa17e72227da,
              mid_getDataContext_fc8fc85e38e59042,
              mid_getEquatorialRadius_456d9a2f64d6b28d,
              mid_getFlattening_456d9a2f64d6b28d,
              mid_getMissionReferenceDate_aaa854c403487cf3,
              mid_getRangeUnitsConverter_873b8d1e769e332d,
              mid_withConventions_c6466dc8192e49d4,
              mid_withDataContext_61bea9df339185ac,
              mid_withEquatorialRadius_703662fe5c7e5a16,
              mid_withFlattening_703662fe5c7e5a16,
              mid_withMissionReferenceDate_ca22bd80f06006ca,
              mid_withRangeUnitsConverter_e7d11dca49312f86,
              mid_create_a463538f9bac0ff7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBuilder(const AbstractBuilder& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            jdouble getEquatorialRadius() const;
            jdouble getFlattening() const;
            ::org::orekit::time::AbsoluteDate getMissionReferenceDate() const;
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter getRangeUnitsConverter() const;
            AbstractBuilder withConventions(const ::org::orekit::utils::IERSConventions &) const;
            AbstractBuilder withDataContext(const ::org::orekit::data::DataContext &) const;
            AbstractBuilder withEquatorialRadius(jdouble) const;
            AbstractBuilder withFlattening(jdouble) const;
            AbstractBuilder withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
            AbstractBuilder withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
          };
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
          extern PyType_Def PY_TYPE_DEF(AbstractBuilder);
          extern PyTypeObject *PY_TYPE(AbstractBuilder);

          class t_AbstractBuilder {
          public:
            PyObject_HEAD
            AbstractBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
