#ifndef org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
  namespace hipparchus {
    namespace complex {
      class Quaternion;
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

          class CommonPhysicalProperties : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_getMaxRcs_456d9a2f64d6b28d,
              mid_getMinRcs_456d9a2f64d6b28d,
              mid_getOebAreaAlongIntermediate_456d9a2f64d6b28d,
              mid_getOebAreaAlongMax_456d9a2f64d6b28d,
              mid_getOebAreaAlongMin_456d9a2f64d6b28d,
              mid_getOebIntermediate_456d9a2f64d6b28d,
              mid_getOebMax_456d9a2f64d6b28d,
              mid_getOebMin_456d9a2f64d6b28d,
              mid_getOebParentFrame_aa70fdb14ae9305f,
              mid_getOebParentFrameEpoch_aaa854c403487cf3,
              mid_getOebQ_db551426640930fe,
              mid_getRcs_456d9a2f64d6b28d,
              mid_getReflectance_456d9a2f64d6b28d,
              mid_getVmAbsolute_456d9a2f64d6b28d,
              mid_getVmApparent_456d9a2f64d6b28d,
              mid_getVmApparentMax_456d9a2f64d6b28d,
              mid_getVmApparentMin_456d9a2f64d6b28d,
              mid_setMaxRcs_77e0f9a1f260e2e5,
              mid_setMinRcs_77e0f9a1f260e2e5,
              mid_setOebAreaAlongIntermediate_77e0f9a1f260e2e5,
              mid_setOebAreaAlongMax_77e0f9a1f260e2e5,
              mid_setOebAreaAlongMin_77e0f9a1f260e2e5,
              mid_setOebIntermediate_77e0f9a1f260e2e5,
              mid_setOebMax_77e0f9a1f260e2e5,
              mid_setOebMin_77e0f9a1f260e2e5,
              mid_setOebParentFrame_a455f3ff24eb0b47,
              mid_setOebParentFrameEpoch_e82d68cd9f886886,
              mid_setOebQ_987a5fb872043b12,
              mid_setRcs_77e0f9a1f260e2e5,
              mid_setReflectance_77e0f9a1f260e2e5,
              mid_setVmAbsolute_77e0f9a1f260e2e5,
              mid_setVmApparent_77e0f9a1f260e2e5,
              mid_setVmApparentMax_77e0f9a1f260e2e5,
              mid_setVmApparentMin_77e0f9a1f260e2e5,
              mid_validate_77e0f9a1f260e2e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonPhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonPhysicalProperties(const CommonPhysicalProperties& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            CommonPhysicalProperties();

            jdouble getMaxRcs() const;
            jdouble getMinRcs() const;
            jdouble getOebAreaAlongIntermediate() const;
            jdouble getOebAreaAlongMax() const;
            jdouble getOebAreaAlongMin() const;
            jdouble getOebIntermediate() const;
            jdouble getOebMax() const;
            jdouble getOebMin() const;
            ::org::orekit::files::ccsds::definitions::FrameFacade getOebParentFrame() const;
            ::org::orekit::time::AbsoluteDate getOebParentFrameEpoch() const;
            ::org::hipparchus::complex::Quaternion getOebQ() const;
            jdouble getRcs() const;
            jdouble getReflectance() const;
            jdouble getVmAbsolute() const;
            jdouble getVmApparent() const;
            jdouble getVmApparentMax() const;
            jdouble getVmApparentMin() const;
            void setMaxRcs(jdouble) const;
            void setMinRcs(jdouble) const;
            void setOebAreaAlongIntermediate(jdouble) const;
            void setOebAreaAlongMax(jdouble) const;
            void setOebAreaAlongMin(jdouble) const;
            void setOebIntermediate(jdouble) const;
            void setOebMax(jdouble) const;
            void setOebMin(jdouble) const;
            void setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
            void setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setOebQ(jint, jdouble) const;
            void setRcs(jdouble) const;
            void setReflectance(jdouble) const;
            void setVmAbsolute(jdouble) const;
            void setVmApparent(jdouble) const;
            void setVmApparentMax(jdouble) const;
            void setVmApparentMin(jdouble) const;
            void validate(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(CommonPhysicalProperties);
          extern PyTypeObject *PY_TYPE(CommonPhysicalProperties);

          class t_CommonPhysicalProperties {
          public:
            PyObject_HEAD
            CommonPhysicalProperties object;
            static PyObject *wrap_Object(const CommonPhysicalProperties&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
