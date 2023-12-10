#ifndef org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
              mid_init$_0fa09c18fee449d5,
              mid_getMaxRcs_dff5885c2c873297,
              mid_getMinRcs_dff5885c2c873297,
              mid_getOebAreaAlongIntermediate_dff5885c2c873297,
              mid_getOebAreaAlongMax_dff5885c2c873297,
              mid_getOebAreaAlongMin_dff5885c2c873297,
              mid_getOebIntermediate_dff5885c2c873297,
              mid_getOebMax_dff5885c2c873297,
              mid_getOebMin_dff5885c2c873297,
              mid_getOebParentFrame_5d5dd95b04037824,
              mid_getOebParentFrameEpoch_85703d13e302437e,
              mid_getOebQ_18aa64800eb51ca4,
              mid_getRcs_dff5885c2c873297,
              mid_getReflectance_dff5885c2c873297,
              mid_getVmAbsolute_dff5885c2c873297,
              mid_getVmApparent_dff5885c2c873297,
              mid_getVmApparentMax_dff5885c2c873297,
              mid_getVmApparentMin_dff5885c2c873297,
              mid_setMaxRcs_17db3a65980d3441,
              mid_setMinRcs_17db3a65980d3441,
              mid_setOebAreaAlongIntermediate_17db3a65980d3441,
              mid_setOebAreaAlongMax_17db3a65980d3441,
              mid_setOebAreaAlongMin_17db3a65980d3441,
              mid_setOebIntermediate_17db3a65980d3441,
              mid_setOebMax_17db3a65980d3441,
              mid_setOebMin_17db3a65980d3441,
              mid_setOebParentFrame_849bc9e3b38b9bcb,
              mid_setOebParentFrameEpoch_600a2a61652bc473,
              mid_setOebQ_bb79ca80d85d0a66,
              mid_setRcs_17db3a65980d3441,
              mid_setReflectance_17db3a65980d3441,
              mid_setVmAbsolute_17db3a65980d3441,
              mid_setVmApparent_17db3a65980d3441,
              mid_setVmApparentMax_17db3a65980d3441,
              mid_setVmApparentMin_17db3a65980d3441,
              mid_validate_17db3a65980d3441,
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
