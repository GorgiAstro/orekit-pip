#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffset::class$ = NULL;
      jmethodID *UTCTAIOffset::mids$ = NULL;
      bool UTCTAIOffset::live$ = false;

      jclass UTCTAIOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_9981f74b2d109da6] = env->getMethodID(cls, "getLeap", "()D");
          mids$[mid_getMJD_d6ab429752e7c267] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getOffset_209f08246d708042] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getOffset_cf010978f3c5a913] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOffset_50aa1fdea9b81950] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_getValidityStart_80e11148db499dda] = env->getMethodID(cls, "getValidityStart", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble UTCTAIOffset::getLeap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_9981f74b2d109da6]);
      }

      jint UTCTAIOffset::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_d6ab429752e7c267]);
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCTAIOffset::getOffset(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOffset_cf010978f3c5a913], a0.this$));
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getValidityStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidityStart_80e11148db499dda]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args);
      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data);
      static PyGetSetDef t_UTCTAIOffset__fields_[] = {
        DECLARE_GET_FIELD(t_UTCTAIOffset, date),
        DECLARE_GET_FIELD(t_UTCTAIOffset, leap),
        DECLARE_GET_FIELD(t_UTCTAIOffset, mJD),
        DECLARE_GET_FIELD(t_UTCTAIOffset, validityStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCTAIOffset__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, getDate, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getLeap, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getOffset, METH_VARARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getValidityStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffset)[] = {
        { Py_tp_methods, t_UTCTAIOffset__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCTAIOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffset, t_UTCTAIOffset, UTCTAIOffset);

      void t_UTCTAIOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffset), &PY_TYPE_DEF(UTCTAIOffset), module, "UTCTAIOffset", 0);
      }

      void t_UTCTAIOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "class_", make_descriptor(UTCTAIOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "wrapfn_", make_descriptor(t_UTCTAIOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffset::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffset::wrap_Object(UTCTAIOffset(((t_UTCTAIOffset *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLeap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOffset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getOffset", args);
        return NULL;
      }

      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLeap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmParser::class$ = NULL;
              jmethodID *AcmParser::mids$ = NULL;
              bool AcmParser::live$ = false;

              jclass AcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_f1675a7d93255dee] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_6b8c194dac7b9184] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_d60ae6cbf486e902] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_build_f1675a7d93255dee]));
              }

              jboolean AcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean AcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean AcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_6b8c194dac7b9184]));
              }

              ::java::util::Map AcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
              }

              jboolean AcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean AcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean AcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_parse_d60ae6cbf486e902], a0.this$));
              }

              jboolean AcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean AcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean AcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void AcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg);
              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data);
              static PyGetSetDef t_AcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_AcmParser, header),
                DECLARE_GET_FIELD(t_AcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_AcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmParser__methods_[] = {
                DECLARE_METHOD(t_AcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, parse, METH_O),
                DECLARE_METHOD(t_AcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmParser)[] = {
                { Py_tp_methods, t_AcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AcmParser, t_AcmParser, AcmParser);
              PyObject *t_AcmParser::wrap_Object(const AcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmParser), &PY_TYPE_DEF(AcmParser), module, "AcmParser", 0);
              }

              void t_AcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "class_", make_descriptor(AcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "wrapfn_", make_descriptor(t_AcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmParser::initializeClass, 1)))
                  return NULL;
                return t_AcmParser::wrap_Object(AcmParser(((t_AcmParser *) arg)->object.this$));
              }
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }

              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffect::class$ = NULL;
          jmethodID *PythonParametricModelEffect::mids$ = NULL;
          bool PythonParametricModelEffect::live$ = false;

          jclass PythonParametricModelEffect::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_29b53a0d2fc3b115] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffect::PythonParametricModelEffect() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonParametricModelEffect::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonParametricModelEffect::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonParametricModelEffect::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self);
          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args);
          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffect__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffect, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffect__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffect, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffect, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffect)[] = {
            { Py_tp_methods, t_PythonParametricModelEffect__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffect_init_ },
            { Py_tp_getset, t_PythonParametricModelEffect__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffect)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffect, t_PythonParametricModelEffect, PythonParametricModelEffect);

          void t_PythonParametricModelEffect::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffect), &PY_TYPE_DEF(PythonParametricModelEffect), module, "PythonParametricModelEffect", 1);
          }

          void t_PythonParametricModelEffect::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "class_", make_descriptor(PythonParametricModelEffect::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "wrapfn_", make_descriptor(t_PythonParametricModelEffect::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffect::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonParametricModelEffect_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffect_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffect::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffect::wrap_Object(PythonParametricModelEffect(((t_PythonParametricModelEffect *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffect::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffect object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffect());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonSection::class$ = NULL;
          jmethodID *PythonSection::mids$ = NULL;
          bool PythonSection::live$ = false;

          jclass PythonSection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonSection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSection::PythonSection() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonSection::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonSection::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonSection::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSection_finalize(t_PythonSection *self);
          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args);
          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data);
          static PyGetSetDef t_PythonSection__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSection, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSection__methods_[] = {
            DECLARE_METHOD(t_PythonSection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSection, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSection)[] = {
            { Py_tp_methods, t_PythonSection__methods_ },
            { Py_tp_init, (void *) t_PythonSection_init_ },
            { Py_tp_getset, t_PythonSection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSection, t_PythonSection, PythonSection);

          void t_PythonSection::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSection), &PY_TYPE_DEF(PythonSection), module, "PythonSection", 1);
          }

          void t_PythonSection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "class_", make_descriptor(PythonSection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "wrapfn_", make_descriptor(t_PythonSection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSection::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonSection_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PythonSection_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSection::initializeClass, 1)))
              return NULL;
            return t_PythonSection::wrap_Object(PythonSection(((t_PythonSection *) arg)->object.this$));
          }
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds)
          {
            PythonSection object((jobject) NULL);

            INT_CALL(object = PythonSection());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSection_finalize(t_PythonSection *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TargetPointing::class$ = NULL;
      jmethodID *TargetPointing::mids$ = NULL;
      bool TargetPointing::live$ = false;

      jclass TargetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TargetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99d09369fb2c379b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_c29af9a8625304e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_99d09369fb2c379b, a0.this$, a1.this$, a2.this$)) {}

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_c29af9a8625304e4, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args);

      static PyMethodDef t_TargetPointing__methods_[] = {
        DECLARE_METHOD(t_TargetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TargetPointing)[] = {
        { Py_tp_methods, t_TargetPointing__methods_ },
        { Py_tp_init, (void *) t_TargetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TargetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(TargetPointing, t_TargetPointing, TargetPointing);

      void t_TargetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(TargetPointing), &PY_TYPE_DEF(TargetPointing), module, "TargetPointing", 0);
      }

      void t_TargetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "class_", make_descriptor(TargetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "wrapfn_", make_descriptor(t_TargetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TargetPointing::initializeClass, 1)))
          return NULL;
        return t_TargetPointing::wrap_Object(TargetPointing(((t_TargetPointing *) arg)->object.this$));
      }
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TargetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::BodyShape a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages::class$ = NULL;
      jmethodID *OrekitMessages::mids$ = NULL;
      bool OrekitMessages::live$ = false;
      OrekitMessages *OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE = NULL;
      OrekitMessages *OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALMOST_EQUATORIAL_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD = NULL;
      OrekitMessages *OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED = NULL;
      OrekitMessages *OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE = NULL;
      OrekitMessages *OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN = NULL;
      OrekitMessages *OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = NULL;
      OrekitMessages *OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_SOURCETABLE = NULL;
      OrekitMessages *OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPLETE_DATA = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_FRAME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_MISSING_TIME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_SENSOR_INDEX = NULL;
      OrekitMessages *OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNEXPECTED_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_GM = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = NULL;
      OrekitMessages *OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::CONNECTION_ERROR = NULL;
      OrekitMessages *OrekitMessages::CORRUPTED_FILE = NULL;
      OrekitMessages *OrekitMessages::CPF_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::CRD_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = NULL;
      OrekitMessages *OrekitMessages::DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH = NULL;
      OrekitMessages *OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = NULL;
      OrekitMessages *OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION = NULL;
      OrekitMessages *OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT = NULL;
      OrekitMessages *OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS = NULL;
      OrekitMessages *OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::END_OF_ENCODED_MESSAGE = NULL;
      OrekitMessages *OrekitMessages::EVENT_DATE_TOO_CLOSE = NULL;
      OrekitMessages *OrekitMessages::EXCEPTIONAL_DATA_CONTEXT = NULL;
      OrekitMessages *OrekitMessages::FAILED_AUTHENTICATION = NULL;
      OrekitMessages *OrekitMessages::FIND_ROOT = NULL;
      OrekitMessages *OrekitMessages::FRAMES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::FRAME_ALREADY_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME = NULL;
      OrekitMessages *OrekitMessages::FRAME_NOT_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_NO_NTH_ANCESTOR = NULL;
      OrekitMessages *OrekitMessages::FUNCTION_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::GNSS_PARITY_ERROR = NULL;
      OrekitMessages *OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = NULL;
      OrekitMessages *OrekitMessages::HEADER_ALREADY_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HEADER_NOT_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FRAMES = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_UNITS = NULL;
      OrekitMessages *OrekitMessages::INCOMPLETE_HEADER = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_SATS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SAMPLING_DATE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SELECTION = NULL;
      OrekitMessages *OrekitMessages::INERTIAL_FORCE_MODEL_MISSING = NULL;
      OrekitMessages *OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = NULL;
      OrekitMessages *OrekitMessages::INTERNAL_ERROR = NULL;
      OrekitMessages *OrekitMessages::INVALID_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INVALID_PARAMETER_RANGE = NULL;
      OrekitMessages *OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_ID = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INVALID_TYPE_FOR_FUNCTION = NULL;
      OrekitMessages *OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID = NULL;
      OrekitMessages *OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = NULL;
      OrekitMessages *OrekitMessages::MISMATCHED_FREQUENCIES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = NULL;
      OrekitMessages *OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_HEADER = NULL;
      OrekitMessages *OrekitMessages::MISSING_SECOND_TLE_LINE = NULL;
      OrekitMessages *OrekitMessages::MISSING_SERIE_J_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH = NULL;
      OrekitMessages *OrekitMessages::MISSING_VELOCITY = NULL;
      OrekitMessages *OrekitMessages::MODIP_GRID_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::MOUNPOINT_ALREADY_CONNECTED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_INTERPOLATOR_USED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED = NULL;
      OrekitMessages *OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = NULL;
      OrekitMessages *OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NON_COPLANAR_POINTS = NULL;
      OrekitMessages *OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_HMS_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_MONTH = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_WEEK_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = NULL;
      OrekitMessages *OrekitMessages::NON_RESETABLE_STATE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_DIRECTORY = NULL;
      OrekitMessages *OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_DATA = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_PROPAGATORS = NULL;
      OrekitMessages *OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::NOT_STRICTLY_POSITIVE = NULL;
      OrekitMessages *OrekitMessages::NOT_TLE_LINES = NULL;
      OrekitMessages *OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR = NULL;
      OrekitMessages *OrekitMessages::NO_CACHED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_GENERATED = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_EPOCH_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = NULL;
      OrekitMessages *OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_PROPAGATOR_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::NO_SEM_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_SUCH_ITRF_FRAME = NULL;
      OrekitMessages *OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_DATA_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_OBJECT = NULL;
      OrekitMessages *OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NULL_ARGUMENT = NULL;
      OrekitMessages *OrekitMessages::NULL_PARENT_FOR_FRAME = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = NULL;
      OrekitMessages *OrekitMessages::ORBITS_MUS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_TYPE_NOT_ALLOWED = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_NOT_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = NULL;
      OrekitMessages *OrekitMessages::POINT_INSIDE_ELLIPSOID = NULL;
      OrekitMessages *OrekitMessages::POLAR_TRAJECTORY = NULL;
      OrekitMessages *OrekitMessages::POSITIVE_FLOW_RATE = NULL;
      OrekitMessages *OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET = NULL;
      OrekitMessages *OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = NULL;
      OrekitMessages *OrekitMessages::SOURCETABLE_PARSE_ERROR = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA = NULL;
      OrekitMessages *OrekitMessages::SP3_INVALID_HEADER_ENTRY = NULL;
      OrekitMessages *OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION = NULL;
      OrekitMessages *OrekitMessages::SP3_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_6X6 = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED = NULL;
      OrekitMessages *OrekitMessages::STATION_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE = NULL;
      OrekitMessages *OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STK_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STREAM_REQUIRES_NMEA_FIX = NULL;
      OrekitMessages *OrekitMessages::TLE_CHECKSUM_ERROR = NULL;
      OrekitMessages *OrekitMessages::TLE_INVALID_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = NULL;
      OrekitMessages *OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_TLE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_RESOURCE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_READ_JPL_HEADER = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_CONTENT_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = NULL;
      OrekitMessages *OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ADDITIONAL_STATE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_DATA_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_HOST = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_MONTH = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_RINEX_FREQUENCY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_TIME_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UNIT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UTC_ID = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_PARAMETER_NAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::VALUE_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::WRONG_COLUMNS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::WRONG_DEGREE_OR_ORDER = NULL;
      OrekitMessages *OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE = NULL;
      OrekitMessages *OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = NULL;
      OrekitMessages *OrekitMessages::WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE = NULL;
      OrekitMessages *OrekitMessages::WRONG_PARSING_TYPE = NULL;

      jclass OrekitMessages::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_d663acd19f82ab0d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/errors/OrekitMessages;");
          mids$[mid_values_b6c08f6d77ef8a0a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/errors/OrekitMessages;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIONAL_STATE_NAME_ALREADY_IN_USE = new OrekitMessages(env->getStaticObjectField(cls, "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_CRITICALLY_INCLINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_CRITICALLY_INCLINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_EQUATORIAL_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_EQUATORIAL_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALTITUDE_BELOW_ALLOWED_THRESHOLD = new OrekitMessages(env->getStaticObjectField(cls, "ALTITUDE_BELOW_ALLOWED_THRESHOLD", "Lorg/orekit/errors/OrekitMessages;"));
          ANGLE_TYPE_NOT_SUPPORTED = new OrekitMessages(env->getStaticObjectField(cls, "ANGLE_TYPE_NOT_SUPPORTED", "Lorg/orekit/errors/OrekitMessages;"));
          ATTEMPT_TO_GENERATE_MALFORMED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "ATTEMPT_TO_GENERATE_MALFORMED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = new OrekitMessages(env->getStaticObjectField(cls, "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_LAGRANGIAN = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_LAGRANGIAN", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_FIND_SATELLITE_IN_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_FIND_SATELLITE_IN_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_BOTH_TAU_AND_GAMMA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_SOURCETABLE = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_SOURCETABLE", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_START_PROPAGATION_FROM_INFINITY = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_START_PROPAGATION_FROM_INFINITY", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_PREAMBLE_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_PREAMBLE_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_MISSING_AGENCY_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_MISSING_AGENCY_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DIFFERENT_LVLH_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DIFFERENT_LVLH_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPLETE_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPLETE_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_TIME_SYSTEMS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_TIME_SYSTEMS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_ROTATION_SEQUENCE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_ROTATION_SEQUENCE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_MISSING_TIME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_MISSING_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_SENSOR_INDEX = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_SENSOR_INDEX", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_SENSOR_INDEX_ALREADY_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_SENSOR_INDEX_ALREADY_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_KEYWORD_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_KEYWORD_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_READ_YET = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_READ_YET", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNEXPECTED_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNEXPECTED_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_ATTITUDE_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_ATTITUDE_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_CONVENTIONS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_CONVENTIONS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_GM = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_GM", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", "Lorg/orekit/errors/OrekitMessages;"));
          CLOCK_FILE_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CLOCK_FILE_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CONNECTION_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "CONNECTION_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          CORRUPTED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CORRUPTED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CPF_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CPF_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CRD_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CRD_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = new OrekitMessages(env->getStaticObjectField(cls, "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", "Lorg/orekit/errors/OrekitMessages;"));
          DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_TIME_OF_CLOSEST_APPROACH = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_TIME_OF_CLOSEST_APPROACH", "Lorg/orekit/errors/OrekitMessages;"));
          DIMENSION_INCONSISTENT_WITH_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "DIMENSION_INCONSISTENT_WITH_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_NEWCOMB_OPERATORS_COMPUTATION = new OrekitMessages(env->getStaticObjectField(cls, "DSST_NEWCOMB_OPERATORS_COMPUTATION", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_SPR_SHADOW_INCONSISTENT = new OrekitMessages(env->getStaticObjectField(cls, "DSST_SPR_SHADOW_INCONSISTENT", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_VMNS_COEFFICIENT_ERROR_MS = new OrekitMessages(env->getStaticObjectField(cls, "DSST_VMNS_COEFFICIENT_ERROR_MS", "Lorg/orekit/errors/OrekitMessages;"));
          DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          END_OF_ENCODED_MESSAGE = new OrekitMessages(env->getStaticObjectField(cls, "END_OF_ENCODED_MESSAGE", "Lorg/orekit/errors/OrekitMessages;"));
          EVENT_DATE_TOO_CLOSE = new OrekitMessages(env->getStaticObjectField(cls, "EVENT_DATE_TOO_CLOSE", "Lorg/orekit/errors/OrekitMessages;"));
          EXCEPTIONAL_DATA_CONTEXT = new OrekitMessages(env->getStaticObjectField(cls, "EXCEPTIONAL_DATA_CONTEXT", "Lorg/orekit/errors/OrekitMessages;"));
          FAILED_AUTHENTICATION = new OrekitMessages(env->getStaticObjectField(cls, "FAILED_AUTHENTICATION", "Lorg/orekit/errors/OrekitMessages;"));
          FIND_ROOT = new OrekitMessages(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/orekit/errors/OrekitMessages;"));
          FRAMES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ALREADY_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ALREADY_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_BOTH_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_BOTH_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_NEITHER_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_NEITHER_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NOT_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NOT_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NO_NTH_ANCESTOR = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NO_NTH_ANCESTOR", "Lorg/orekit/errors/OrekitMessages;"));
          FUNCTION_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "FUNCTION_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          GNSS_PARITY_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "GNSS_PARITY_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = new OrekitMessages(env->getStaticObjectField(cls, "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_ALREADY_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_ALREADY_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_NOT_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_NOT_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HYPERBOLIC_ORBIT_NOT_HANDLED_AS = new OrekitMessages(env->getStaticObjectField(cls, "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_UNITS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_UNITS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPLETE_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPLETE_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_DATES_IN_IERS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_DATES_IN_IERS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_ELEMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_ELEMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_SATS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_SATS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SAMPLING_DATE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SAMPLING_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SELECTION = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SELECTION", "Lorg/orekit/errors/OrekitMessages;"));
          INERTIAL_FORCE_MODEL_MISSING = new OrekitMessages(env->getStaticObjectField(cls, "INERTIAL_FORCE_MODEL_MISSING", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", "Lorg/orekit/errors/OrekitMessages;"));
          INTERNAL_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_PARAMETER_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_PARAMETER_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_RANGE_INDICATOR_IN_CRD_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_RANGE_INDICATOR_IN_CRD_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_ID = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_ID", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_TYPE_FOR_FUNCTION = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_TYPE_FOR_FUNCTION", "Lorg/orekit/errors/OrekitMessages;"));
          IRREGULAR_OR_INCOMPLETE_GRID = new OrekitMessages(env->getStaticObjectField(cls, "IRREGULAR_OR_INCOMPLETE_GRID", "Lorg/orekit/errors/OrekitMessages;"));
          ITRF_VERSIONS_PREFIX_ONLY = new OrekitMessages(env->getStaticObjectField(cls, "ITRF_VERSIONS_PREFIX_ONLY", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          MISMATCHED_FREQUENCIES = new OrekitMessages(env->getStaticObjectField(cls, "MISMATCHED_FREQUENCIES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SECOND_TLE_LINE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SECOND_TLE_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SERIE_J_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SERIE_J_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_STATION_DATA_FOR_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_STATION_DATA_FOR_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_VELOCITY = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_VELOCITY", "Lorg/orekit/errors/OrekitMessages;"));
          MODIP_GRID_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "MODIP_GRID_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          MOUNPOINT_ALREADY_CONNECTED = new OrekitMessages(env->getStaticObjectField(cls, "MOUNPOINT_ALREADY_CONNECTED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_INTERPOLATOR_USED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_INTERPOLATOR_USED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_SHOOTING_UNDERCONSTRAINED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_SHOOTING_UNDERCONSTRAINED", "Lorg/orekit/errors/OrekitMessages;"));
          NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = new OrekitMessages(env->getStaticObjectField(cls, "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", "Lorg/orekit/errors/OrekitMessages;"));
          NEQUICK_F2_FM3_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NEQUICK_F2_FM3_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICALLY_SORTED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICALLY_SORTED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_COPLANAR_POINTS = new OrekitMessages(env->getStaticObjectField(cls, "NON_COPLANAR_POINTS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_DIFFERENT_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DAY_NUMBER_IN_YEAR = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DAY_NUMBER_IN_YEAR", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_GEOMAGNETIC_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_GEOMAGNETIC_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_HMS_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_HMS_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_WEEK_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_WEEK_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_YEAR_MONTH_DAY = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_YEAR_MONTH_DAY", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_RESETABLE_STATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_RESETABLE_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_DIRECTORY = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_DIRECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_JPL_EPHEMERIDES_BINARY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_IERS_DATA_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_IERS_DATA_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_SEM_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_ATTITUDE_PROVIDERS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_ATTITUDE_PROVIDERS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_CACHED_NEIGHBORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_CACHED_NEIGHBORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_DATA = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_GNSS_FOR_DOP = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_GNSS_FOR_DOP", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_PROPAGATORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_PROPAGATORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_POSITIVE_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_POSITIVE_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_STRICTLY_POSITIVE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_STRICTLY_POSITIVE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_TLE_LINES = new OrekitMessages(env->getStaticObjectField(cls, "NOT_TLE_LINES", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_VALID_INTERNATIONAL_DESIGNATOR = new OrekitMessages(env->getStaticObjectField(cls, "NOT_VALID_INTERNATIONAL_DESIGNATOR", "Lorg/orekit/errors/OrekitMessages;"));
          NO_CACHED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NO_CACHED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_GENERATED = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_GENERATED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_LOADED_FOR_CELESTIAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_LOADED_FOR_CELESTIAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EPOCH_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_EPOCH_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_GRAVITY_FIELD_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_GRAVITY_FIELD_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_INTERPOLATOR_FOR_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "NO_INTERPOLATOR_FOR_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_OCEAN_TIDE_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_OCEAN_TIDE_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_PROPAGATOR_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_PROPAGATOR_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_REFERENCE_DATE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "NO_REFERENCE_DATE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SEM_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SEM_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SOLAR_ACTIVITY_AT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SOLAR_ACTIVITY_AT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SUCH_ITRF_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NO_SUCH_ITRF_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TEC_DATA_IN_FILES_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TEC_DATA_IN_FILES_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_DATA_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_DATA_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          NO_UNSCENTED_TRANSFORM_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_UNSCENTED_TRANSFORM_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_YUMA_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_YUMA_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_ARGUMENT = new OrekitMessages(env->getStaticObjectField(cls, "NULL_ARGUMENT", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_PARENT_FOR_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NULL_PARENT_FOR_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          ORBITS_MUS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBITS_MUS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_AND_ATTITUDE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_AND_ATTITUDE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_TYPE_NOT_ALLOWED = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_TYPE_NOT_ALLOWED", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DERIVATION_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DERIVATION_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_NOT_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_NOT_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", "Lorg/orekit/errors/OrekitMessages;"));
          POINT_INSIDE_ELLIPSOID = new OrekitMessages(env->getStaticObjectField(cls, "POINT_INSIDE_ELLIPSOID", "Lorg/orekit/errors/OrekitMessages;"));
          POLAR_TRAJECTORY = new OrekitMessages(env->getStaticObjectField(cls, "POLAR_TRAJECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          POSITIVE_FLOW_RATE = new OrekitMessages(env->getStaticObjectField(cls, "POSITIVE_FLOW_RATE", "Lorg/orekit/errors/OrekitMessages;"));
          SATELLITE_COLLIDED_WITH_TARGET = new OrekitMessages(env->getStaticObjectField(cls, "SATELLITE_COLLIDED_WITH_TARGET", "Lorg/orekit/errors/OrekitMessages;"));
          SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          SOURCETABLE_PARSE_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "SOURCETABLE_PARSE_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_FILE_METADATA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_FILE_METADATA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_SATELLITE_MEDATADA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INVALID_HEADER_ENTRY = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INVALID_HEADER_ENTRY", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_NUMBER_OF_EPOCH_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "SP3_NUMBER_OF_EPOCH_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_TOO_MANY_SATELLITES_FOR_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_TOO_MANY_SATELLITES_FOR_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_COVARIANCE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_COVARIANCE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_6X6 = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_6X6", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_INITIALIZED = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_INITIALIZED", "Lorg/orekit/errors/OrekitMessages;"));
          STATION_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "STATION_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          STEC_INTEGRATION_DID_NOT_CONVERGE = new OrekitMessages(env->getStaticObjectField(cls, "STEC_INTEGRATION_DID_NOT_CONVERGE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNMAPPED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNMAPPED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STREAM_REQUIRES_NMEA_FIX = new OrekitMessages(env->getStaticObjectField(cls, "STREAM_REQUIRES_NMEA_FIX", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_CHECKSUM_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "TLE_CHECKSUM_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_INVALID_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TLE_INVALID_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SMALL_SCALE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SMALL_SCALE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_NOT_CROSSING_XZPLANE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_NOT_CROSSING_XZPLANE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_TLE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_TLE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_RESOURCE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_RESOURCE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_ELEMENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_ELEMENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_READ_JPL_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_READ_JPL_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ABSOLUTE_PVCOORDINATES = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ABSOLUTE_PVCOORDINATES", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_CONTENT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_CONTENT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AFTER_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AT_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AT_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE_AFTER_LINE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE_AFTER_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FORMAT_FOR_ILRS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FORMAT_FOR_ILRS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNINITIALIZED_VALUE_FOR_KEY = new OrekitMessages(env->getStaticObjectField(cls, "UNINITIALIZED_VALUE_FOR_KEY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ADDITIONAL_STATE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ADDITIONAL_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_AUTHENTICATION_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_AUTHENTICATION_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CARRIER_PHASE_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CARRIER_PHASE_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CLOCK_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CLOCK_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_DATA_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_DATA_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ENCODED_MESSAGE_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ENCODED_MESSAGE_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_HOST = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_HOST", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_NAVIGATION_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_NAVIGATION_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_RINEX_FREQUENCY = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_RINEX_FREQUENCY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_ANTENNA_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_ANTENNA_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_TIME_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_TIME_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UNIT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UNIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UTC_ID = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UTC_ID", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FREQUENCY_FOR_ANTENNA = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_LOCAL_ORBITAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_LOCAL_ORBITAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_PARAMETER_NAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_PARAMETER_NAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          VALUE_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "VALUE_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_COLUMNS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_COLUMNS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_DEGREE_OR_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_DEGREE_OR_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_EOP_INTERPOLATION_DEGREE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_EOP_INTERPOLATION_DEGREE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_ORBIT_PARAMETERS_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_ORBIT_PARAMETERS_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_PARSING_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_PARSING_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String OrekitMessages::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String OrekitMessages::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      OrekitMessages OrekitMessages::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d663acd19f82ab0d], a0.this$));
      }

      JArray< OrekitMessages > OrekitMessages::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrekitMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_b6c08f6d77ef8a0a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args);
      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg);
      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self);
      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrekitMessages_values(PyTypeObject *type);
      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data);
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data);
      static PyGetSetDef t_OrekitMessages__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages, sourceString),
        DECLARE_GET_FIELD(t_OrekitMessages, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages, getLocalizedString, METH_O),
        DECLARE_METHOD(t_OrekitMessages, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_OrekitMessages, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages)[] = {
        { Py_tp_methods, t_OrekitMessages__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitMessages__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrekitMessages, t_OrekitMessages, OrekitMessages);
      PyObject *t_OrekitMessages::wrap_Object(const OrekitMessages& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages), &PY_TYPE_DEF(OrekitMessages), module, "OrekitMessages", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(OrekitMessages$UTF8Control)));
      }

      void t_OrekitMessages::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "class_", make_descriptor(OrekitMessages::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "wrapfn_", make_descriptor(t_OrekitMessages::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrekitMessages::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_CRITICALLY_INCLINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_EQUATORIAL_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_EQUATORIAL_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALTITUDE_BELOW_ALLOWED_THRESHOLD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ANGLE_TYPE_NOT_SUPPORTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTEMPT_TO_GENERATE_MALFORMED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_LAGRANGIAN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_FIND_SATELLITE_IN_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_SOURCETABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_SOURCETABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_START_PROPAGATION_FROM_INFINITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_PREAMBLE_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_MISSING_AGENCY_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DIFFERENT_LVLH_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPLETE_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPLETE_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_TIME_SYSTEMS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_ROTATION_SEQUENCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_MISSING_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_MISSING_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_SENSOR_INDEX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_SENSOR_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_SENSOR_INDEX_ALREADY_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_KEYWORD_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_READ_YET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNEXPECTED_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNEXPECTED_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_ATTITUDE_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_CONVENTIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_GM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_GM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CLOCK_FILE_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CONNECTION_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CONNECTION_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CORRUPTED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CORRUPTED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CPF_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CPF_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CRD_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CRD_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_TIME_OF_CLOSEST_APPROACH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIMENSION_INCONSISTENT_WITH_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_NEWCOMB_OPERATORS_COMPUTATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_SPR_SHADOW_INCONSISTENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_VMNS_COEFFICIENT_ERROR_MS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "END_OF_ENCODED_MESSAGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::END_OF_ENCODED_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EVENT_DATE_TOO_CLOSE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EVENT_DATE_TOO_CLOSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EXCEPTIONAL_DATA_CONTEXT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EXCEPTIONAL_DATA_CONTEXT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FAILED_AUTHENTICATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FAILED_AUTHENTICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FIND_ROOT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAMES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAMES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ALREADY_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ALREADY_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_BOTH_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_NEITHER_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NOT_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NOT_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NO_NTH_ANCESTOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NO_NTH_ANCESTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FUNCTION_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FUNCTION_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GNSS_PARITY_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GNSS_PARITY_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_ALREADY_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_ALREADY_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_NOT_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_NOT_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_UNITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPLETE_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPLETE_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_DATES_IN_IERS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_ELEMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_SATS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_SATS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SAMPLING_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SAMPLING_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SELECTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SELECTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INERTIAL_FORCE_MODEL_MISSING", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INERTIAL_FORCE_MODEL_MISSING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INTERNAL_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_PARAMETER_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_PARAMETER_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_RANGE_INDICATOR_IN_CRD_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_TYPE_FOR_FUNCTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_TYPE_FOR_FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "IRREGULAR_OR_INCOMPLETE_GRID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ITRF_VERSIONS_PREFIX_ONLY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISMATCHED_FREQUENCIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISMATCHED_FREQUENCIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SECOND_TLE_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SECOND_TLE_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SERIE_J_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SERIE_J_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_STATION_DATA_FOR_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_VELOCITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MODIP_GRID_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MODIP_GRID_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MOUNPOINT_ALREADY_CONNECTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MOUNPOINT_ALREADY_CONNECTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_INTERPOLATOR_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_INTERPOLATOR_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_SHOOTING_UNDERCONSTRAINED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEQUICK_F2_FM3_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICALLY_SORTED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_COPLANAR_POINTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_COPLANAR_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DAY_NUMBER_IN_YEAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_GEOMAGNETIC_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_HMS_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_HMS_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_WEEK_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_WEEK_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_YEAR_MONTH_DAY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_RESETABLE_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_RESETABLE_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_DIRECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_DIRECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_IERS_DATA_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_ATTITUDE_PROVIDERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_CACHED_NEIGHBORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_GNSS_FOR_DOP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_PROPAGATORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_PROPAGATORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_POSITIVE_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_STRICTLY_POSITIVE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_STRICTLY_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_TLE_LINES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_TLE_LINES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_VALID_INTERNATIONAL_DESIGNATOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_CACHED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_CACHED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_GENERATED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_GENERATED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_LOADED_FOR_CELESTIAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EPOCH_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EPOCH_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_GRAVITY_FIELD_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_INTERPOLATOR_FOR_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_OCEAN_TIDE_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_PROPAGATOR_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_PROPAGATOR_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_REFERENCE_DATE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SEM_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SEM_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SOLAR_ACTIVITY_AT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SUCH_ITRF_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SUCH_ITRF_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TEC_DATA_IN_FILES_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_DATA_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_DATA_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_UNSCENTED_TRANSFORM_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_YUMA_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_ARGUMENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_PARENT_FOR_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_PARENT_FOR_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBITS_MUS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBITS_MUS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_AND_ATTITUDE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_TYPE_NOT_ALLOWED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_TYPE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DERIVATION_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_NOT_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_NOT_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POINT_INSIDE_ELLIPSOID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POINT_INSIDE_ELLIPSOID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POLAR_TRAJECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POLAR_TRAJECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POSITIVE_FLOW_RATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POSITIVE_FLOW_RATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SATELLITE_COLLIDED_WITH_TARGET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SOURCETABLE_PARSE_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SOURCETABLE_PARSE_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_FILE_METADATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INVALID_HEADER_ENTRY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INVALID_HEADER_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_NUMBER_OF_EPOCH_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_TOO_MANY_SATELLITES_FOR_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_COVARIANCE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_6X6", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_6X6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_INITIALIZED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATION_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATION_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STEC_INTEGRATION_DID_NOT_CONVERGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNMAPPED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STREAM_REQUIRES_NMEA_FIX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STREAM_REQUIRES_NMEA_FIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_CHECKSUM_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_CHECKSUM_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_INVALID_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_INVALID_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SMALL_SCALE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_NOT_CROSSING_XZPLANE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_TLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_TLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_RESOURCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_RESOURCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_ELEMENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_READ_JPL_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_READ_JPL_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ABSOLUTE_PVCOORDINATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_CONTENT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_CONTENT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AT_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE_AFTER_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FORMAT_FOR_ILRS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNINITIALIZED_VALUE_FOR_KEY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ADDITIONAL_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ADDITIONAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_AUTHENTICATION_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CARRIER_PHASE_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CLOCK_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_DATA_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_DATA_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ENCODED_MESSAGE_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_HOST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_HOST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_NAVIGATION_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_RINEX_FREQUENCY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_RINEX_FREQUENCY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_ANTENNA_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_TIME_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_TIME_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UNIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UNIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UTC_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UTC_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_LOCAL_ORBITAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_PARAMETER_NAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_PARAMETER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VALUE_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VALUE_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_COLUMNS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_COLUMNS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_DEGREE_OR_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_DEGREE_OR_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_EOP_INTERPOLATION_DEGREE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_ORBIT_PARAMETERS_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_PARSING_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_PARSING_TYPE)));
      }

      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages::wrap_Object(OrekitMessages(((t_OrekitMessages *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrekitMessages result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::valueOf(a0));
          return t_OrekitMessages::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrekitMessages_values(PyTypeObject *type)
      {
        JArray< OrekitMessages > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::values());
        return JArray<jobject>(result.this$).wrap(t_OrekitMessages::wrap_jobject);
      }
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunction::class$ = NULL;
          jmethodID *ObjectiveFunction::mids$ = NULL;
          bool ObjectiveFunction::live$ = false;

          jclass ObjectiveFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7c0a4729095b1add] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;)V");
              mids$[mid_getObjectiveFunction_3cc258d581ae5426] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunction::ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c0a4729095b1add, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateFunction ObjectiveFunction::getObjectiveFunction() const
          {
            return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_3cc258d581ae5426]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self);
          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data);
          static PyGetSetDef t_ObjectiveFunction__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunction, objectiveFunction),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunction__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, getObjectiveFunction, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunction)[] = {
            { Py_tp_methods, t_ObjectiveFunction__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunction_init_ },
            { Py_tp_getset, t_ObjectiveFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunction, t_ObjectiveFunction, ObjectiveFunction);

          void t_ObjectiveFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunction), &PY_TYPE_DEF(ObjectiveFunction), module, "ObjectiveFunction", 0);
          }

          void t_ObjectiveFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "class_", make_descriptor(ObjectiveFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "wrapfn_", make_descriptor(t_ObjectiveFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunction::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunction::wrap_Object(ObjectiveFunction(((t_ObjectiveFunction *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ObjectiveFunction object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunction(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self)
          {
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashSet::class$ = NULL;
    jmethodID *HashSet::mids$ = NULL;
    bool HashSet::live$ = false;

    jclass HashSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_3c81d70650b38107] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashSet::HashSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    HashSet::HashSet(jint a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    HashSet::HashSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

    HashSet::HashSet(jint a0, jfloat a1) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_3c81d70650b38107, a0, a1)) {}

    jboolean HashSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    void HashSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object HashSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean HashSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean HashSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator HashSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jboolean HashSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jint HashSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Spliterator HashSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args);
    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clone(t_HashSet *self);
    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data);
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data);
    static PyGetSetDef t_HashSet__fields_[] = {
      DECLARE_GET_FIELD(t_HashSet, empty),
      DECLARE_GET_FIELD(t_HashSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashSet__methods_[] = {
      DECLARE_METHOD(t_HashSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, add, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, size, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, spliterator, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashSet)[] = {
      { Py_tp_methods, t_HashSet__methods_ },
      { Py_tp_init, (void *) t_HashSet_init_ },
      { Py_tp_getset, t_HashSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_HashSet *)) get_generic_iterator< t_HashSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(HashSet, t_HashSet, HashSet);
    PyObject *t_HashSet::wrap_Object(const HashSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_HashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_HashSet::install(PyObject *module)
    {
      installType(&PY_TYPE(HashSet), &PY_TYPE_DEF(HashSet), module, "HashSet", 0);
    }

    void t_HashSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "class_", make_descriptor(HashSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "wrapfn_", make_descriptor(t_HashSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashSet::initializeClass, 1)))
        return NULL;
      return t_HashSet::wrap_Object(HashSet(((t_HashSet *) arg)->object.this$));
    }
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashSet object((jobject) NULL);

          INT_CALL(object = HashSet());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashSet(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashSet_clone(t_HashSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "spliterator", args, 2);
    }
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCBScale::class$ = NULL;
      jmethodID *TCBScale::mids$ = NULL;
      bool TCBScale::live$ = false;

      jclass TCBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble TCBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String TCBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_getName(t_TCBScale *self);
      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data);
      static PyGetSetDef t_TCBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCBScale__methods_[] = {
        DECLARE_METHOD(t_TCBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCBScale)[] = {
        { Py_tp_methods, t_TCBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCBScale, t_TCBScale, TCBScale);

      void t_TCBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCBScale), &PY_TYPE_DEF(TCBScale), module, "TCBScale", 0);
      }

      void t_TCBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "class_", make_descriptor(TCBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "wrapfn_", make_descriptor(t_TCBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCBScale::initializeClass, 1)))
          return NULL;
        return t_TCBScale::wrap_Object(TCBScale(((t_TCBScale *) arg)->object.this$));
      }
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCBScale_getName(t_TCBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTHarvester::class$ = NULL;
          jmethodID *DSSTHarvester::mids$ = NULL;
          bool DSSTHarvester::live$ = false;

          jclass DSSTHarvester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTHarvester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_freezeColumnsNames_ff7cb6c242604316] = env->getMethodID(cls, "freezeColumnsNames", "()V");
              mids$[mid_getB1_b2eebabce70526d8] = env->getMethodID(cls, "getB1", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB2_011bf64ebaa4e018] = env->getMethodID(cls, "getB2", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB3_011bf64ebaa4e018] = env->getMethodID(cls, "getB3", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB4_b2eebabce70526d8] = env->getMethodID(cls, "getB4", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getParametersJacobian_011bf64ebaa4e018] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_initializeFieldShortPeriodTerms_72b846eb87f3af9a] = env->getMethodID(cls, "initializeFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setReferenceState_72b846eb87f3af9a] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_updateFieldShortPeriodTerms_72b846eb87f3af9a] = env->getMethodID(cls, "updateFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTHarvester::freezeColumnsNames() const
          {
            env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_ff7cb6c242604316]);
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB1() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB1_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB2(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB2_011bf64ebaa4e018], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB3(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB3_011bf64ebaa4e018], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB4() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB4_b2eebabce70526d8]));
          }

          ::java::util::List DSSTHarvester::getJacobiansColumnsNames() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_d751c1a57012b438]));
          }

          ::org::orekit::orbits::OrbitType DSSTHarvester::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_011bf64ebaa4e018], a0.this$));
          }

          ::org::orekit::orbits::PositionAngleType DSSTHarvester::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018], a0.this$));
          }

          void DSSTHarvester::initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_initializeFieldShortPeriodTerms_72b846eb87f3af9a], a0.this$);
          }

          void DSSTHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceState_72b846eb87f3af9a], a0.this$);
          }

          void DSSTHarvester::updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updateFieldShortPeriodTerms_72b846eb87f3af9a], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data);
          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTHarvester__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTHarvester, b1),
            DECLARE_GET_FIELD(t_DSSTHarvester, b4),
            DECLARE_GET_FIELD(t_DSSTHarvester, jacobiansColumnsNames),
            DECLARE_GET_FIELD(t_DSSTHarvester, orbitType),
            DECLARE_GET_FIELD(t_DSSTHarvester, positionAngleType),
            DECLARE_SET_FIELD(t_DSSTHarvester, referenceState),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTHarvester__methods_[] = {
            DECLARE_METHOD(t_DSSTHarvester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, freezeColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB1, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB2, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB3, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB4, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getJacobiansColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getOrbitType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getParametersJacobian, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getPositionAngleType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getStateTransitionMatrix, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, initializeFieldShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, setReferenceState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, updateFieldShortPeriodTerms, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTHarvester)[] = {
            { Py_tp_methods, t_DSSTHarvester__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DSSTHarvester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTHarvester)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
            NULL
          };

          DEFINE_TYPE(DSSTHarvester, t_DSSTHarvester, DSSTHarvester);

          void t_DSSTHarvester::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTHarvester), &PY_TYPE_DEF(DSSTHarvester), module, "DSSTHarvester", 0);
          }

          void t_DSSTHarvester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "class_", make_descriptor(DSSTHarvester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "wrapfn_", make_descriptor(t_DSSTHarvester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTHarvester::initializeClass, 1)))
              return NULL;
            return t_DSSTHarvester::wrap_Object(DSSTHarvester(((t_DSSTHarvester *) arg)->object.this$));
          }
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTHarvester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.freezeColumnsNames());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB2(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB2", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB3(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB3", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getJacobiansColumnsNames());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOrbitType());
              return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getOrbitType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParametersJacobian(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
          }

          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getPositionAngleType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
          }

          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.initializeFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "initializeFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "setReferenceState", args, 2);
          }

          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.updateFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updateFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PolynomialThrustSegment::class$ = NULL;
          jmethodID *PolynomialThrustSegment::mids$ = NULL;
          bool PolynomialThrustSegment::live$ = false;

          jclass PolynomialThrustSegment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_768de08514555b99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
              mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_8e5aead0a4b0cc16] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolynomialThrustSegment::PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_768de08514555b99, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b37cafaaf55a3a5], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::FieldAbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8e5aead0a4b0cc16], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args);

          static PyMethodDef t_PolynomialThrustSegment__methods_[] = {
            DECLARE_METHOD(t_PolynomialThrustSegment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolynomialThrustSegment)[] = {
            { Py_tp_methods, t_PolynomialThrustSegment__methods_ },
            { Py_tp_init, (void *) t_PolynomialThrustSegment_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolynomialThrustSegment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolynomialThrustSegment, t_PolynomialThrustSegment, PolynomialThrustSegment);

          void t_PolynomialThrustSegment::install(PyObject *module)
          {
            installType(&PY_TYPE(PolynomialThrustSegment), &PY_TYPE_DEF(PolynomialThrustSegment), module, "PolynomialThrustSegment", 0);
          }

          void t_PolynomialThrustSegment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "class_", make_descriptor(PolynomialThrustSegment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "wrapfn_", make_descriptor(t_PolynomialThrustSegment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolynomialThrustSegment::initializeClass, 1)))
              return NULL;
            return t_PolynomialThrustSegment::wrap_Object(PolynomialThrustSegment(((t_PolynomialThrustSegment *) arg)->object.this$));
          }
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolynomialThrustSegment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
            PolynomialThrustSegment object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PolynomialThrustSegment(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Control3DVectorCostType::class$ = NULL;
        jmethodID *Control3DVectorCostType::mids$ = NULL;
        bool Control3DVectorCostType::live$ = false;
        Control3DVectorCostType *Control3DVectorCostType::INF_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::NONE = NULL;
        Control3DVectorCostType *Control3DVectorCostType::ONE_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::TWO_NORM = NULL;

        jclass Control3DVectorCostType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Control3DVectorCostType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_aa19eca086a185fe] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_78c2296af19efe37] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_valueOf_d70b57e697ac4317] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_values_ef4040c43e1155b3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INF_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "INF_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            NONE = new Control3DVectorCostType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            ONE_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "ONE_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            TWO_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "TWO_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_aa19eca086a185fe], a0.this$));
        }

        jdouble Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_78c2296af19efe37], a0.this$);
        }

        Control3DVectorCostType Control3DVectorCostType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Control3DVectorCostType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d70b57e697ac4317], a0.this$));
        }

        JArray< Control3DVectorCostType > Control3DVectorCostType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Control3DVectorCostType >(env->callStaticObjectMethod(cls, mids$[mid_values_ef4040c43e1155b3]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type);
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data);
        static PyGetSetDef t_Control3DVectorCostType__fields_[] = {
          DECLARE_GET_FIELD(t_Control3DVectorCostType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Control3DVectorCostType__methods_[] = {
          DECLARE_METHOD(t_Control3DVectorCostType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, of_, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Control3DVectorCostType)[] = {
          { Py_tp_methods, t_Control3DVectorCostType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Control3DVectorCostType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Control3DVectorCostType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Control3DVectorCostType, t_Control3DVectorCostType, Control3DVectorCostType);
        PyObject *t_Control3DVectorCostType::wrap_Object(const Control3DVectorCostType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Control3DVectorCostType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Control3DVectorCostType::install(PyObject *module)
        {
          installType(&PY_TYPE(Control3DVectorCostType), &PY_TYPE_DEF(Control3DVectorCostType), module, "Control3DVectorCostType", 0);
        }

        void t_Control3DVectorCostType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "class_", make_descriptor(Control3DVectorCostType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "wrapfn_", make_descriptor(t_Control3DVectorCostType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "boxfn_", make_descriptor(boxObject));
          env->getClass(Control3DVectorCostType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "INF_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::INF_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "NONE", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "ONE_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::ONE_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "TWO_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::TWO_NORM)));
        }

        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Control3DVectorCostType::initializeClass, 1)))
            return NULL;
          return t_Control3DVectorCostType::wrap_Object(Control3DVectorCostType(((t_Control3DVectorCostType *) arg)->object.this$));
        }
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Control3DVectorCostType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Control3DVectorCostType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::valueOf(a0));
            return t_Control3DVectorCostType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type)
        {
          JArray< Control3DVectorCostType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::values());
          return JArray<jobject>(result.this$).wrap(t_Control3DVectorCostType::wrap_jobject);
        }
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Quaternion::class$ = NULL;
      jmethodID *Quaternion::mids$ = NULL;
      bool Quaternion::live$ = false;
      Quaternion *Quaternion::I = NULL;
      Quaternion *Quaternion::IDENTITY = NULL;
      Quaternion *Quaternion::J = NULL;
      Quaternion *Quaternion::K = NULL;
      Quaternion *Quaternion::ZERO = NULL;

      jclass Quaternion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Quaternion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_bb630ae4b8ab9248] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
          mids$[mid_add_dfdc255ca1b77803] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_add_ca44ccaabf8f585e] = env->getStaticMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_dotProduct_292953670e6340c7] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_dotProduct_b80df851df880bd1] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_5917d1034ab0e20b] = env->getMethodID(cls, "equals", "(Lorg/hipparchus/complex/Quaternion;D)Z");
          mids$[mid_getConjugate_c78679230082648b] = env->getMethodID(cls, "getConjugate", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getInverse_c78679230082648b] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getPositivePolarForm_c78679230082648b] = env->getMethodID(cls, "getPositivePolarForm", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getQ0_9981f74b2d109da6] = env->getMethodID(cls, "getQ0", "()D");
          mids$[mid_getQ1_9981f74b2d109da6] = env->getMethodID(cls, "getQ1", "()D");
          mids$[mid_getQ2_9981f74b2d109da6] = env->getMethodID(cls, "getQ2", "()D");
          mids$[mid_getQ3_9981f74b2d109da6] = env->getMethodID(cls, "getQ3", "()D");
          mids$[mid_getScalarPart_9981f74b2d109da6] = env->getMethodID(cls, "getScalarPart", "()D");
          mids$[mid_getVectorPart_be783177b060994b] = env->getMethodID(cls, "getVectorPart", "()[D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isPureQuaternion_7bc657d327f0f830] = env->getMethodID(cls, "isPureQuaternion", "(D)Z");
          mids$[mid_isUnitQuaternion_7bc657d327f0f830] = env->getMethodID(cls, "isUnitQuaternion", "(D)Z");
          mids$[mid_multiply_dfdc255ca1b77803] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_d98ee69a81baf7cf] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_ca44ccaabf8f585e] = env->getStaticMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_normalize_c78679230082648b] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_dfdc255ca1b77803] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_ca44ccaabf8f585e] = env->getStaticMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Quaternion(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Quaternion;"));
          IDENTITY = new Quaternion(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/complex/Quaternion;"));
          J = new Quaternion(env->getStaticObjectField(cls, "J", "Lorg/hipparchus/complex/Quaternion;"));
          K = new Quaternion(env->getStaticObjectField(cls, "K", "Lorg/hipparchus/complex/Quaternion;"));
          ZERO = new Quaternion(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Quaternion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Quaternion::Quaternion(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      Quaternion::Quaternion(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb630ae4b8ab9248, a0, a1.this$)) {}

      Quaternion::Quaternion(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

      Quaternion Quaternion::add(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_add_dfdc255ca1b77803], a0.this$));
      }

      Quaternion Quaternion::add(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_add_ca44ccaabf8f585e], a0.this$, a1.this$));
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_292953670e6340c7], a0.this$);
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_b80df851df880bd1], a0.this$, a1.this$);
      }

      jboolean Quaternion::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jboolean Quaternion::equals(const Quaternion & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_5917d1034ab0e20b], a0.this$, a1);
      }

      Quaternion Quaternion::getConjugate() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getConjugate_c78679230082648b]));
      }

      Quaternion Quaternion::getInverse() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getInverse_c78679230082648b]));
      }

      jdouble Quaternion::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
      }

      Quaternion Quaternion::getPositivePolarForm() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getPositivePolarForm_c78679230082648b]));
      }

      jdouble Quaternion::getQ0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ0_9981f74b2d109da6]);
      }

      jdouble Quaternion::getQ1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ1_9981f74b2d109da6]);
      }

      jdouble Quaternion::getQ2() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ2_9981f74b2d109da6]);
      }

      jdouble Quaternion::getQ3() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ3_9981f74b2d109da6]);
      }

      jdouble Quaternion::getScalarPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScalarPart_9981f74b2d109da6]);
      }

      JArray< jdouble > Quaternion::getVectorPart() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVectorPart_be783177b060994b]));
      }

      jint Quaternion::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean Quaternion::isPureQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPureQuaternion_7bc657d327f0f830], a0);
      }

      jboolean Quaternion::isUnitQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isUnitQuaternion_7bc657d327f0f830], a0);
      }

      Quaternion Quaternion::multiply(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_dfdc255ca1b77803], a0.this$));
      }

      Quaternion Quaternion::multiply(jdouble a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_d98ee69a81baf7cf], a0));
      }

      Quaternion Quaternion::multiply(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_multiply_ca44ccaabf8f585e], a0.this$, a1.this$));
      }

      Quaternion Quaternion::normalize() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_normalize_c78679230082648b]));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_subtract_dfdc255ca1b77803], a0.this$));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_subtract_ca44ccaabf8f585e], a0.this$, a1.this$));
      }

      ::java::lang::String Quaternion::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self);
      static PyObject *t_Quaternion_getInverse(t_Quaternion *self);
      static PyObject *t_Quaternion_getNorm(t_Quaternion *self);
      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ0(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ1(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ2(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ3(t_Quaternion *self);
      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self);
      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self);
      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_normalize(t_Quaternion *self);
      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data);
      static PyGetSetDef t_Quaternion__fields_[] = {
        DECLARE_GET_FIELD(t_Quaternion, conjugate),
        DECLARE_GET_FIELD(t_Quaternion, inverse),
        DECLARE_GET_FIELD(t_Quaternion, norm),
        DECLARE_GET_FIELD(t_Quaternion, positivePolarForm),
        DECLARE_GET_FIELD(t_Quaternion, q0),
        DECLARE_GET_FIELD(t_Quaternion, q1),
        DECLARE_GET_FIELD(t_Quaternion, q2),
        DECLARE_GET_FIELD(t_Quaternion, q3),
        DECLARE_GET_FIELD(t_Quaternion, scalarPart),
        DECLARE_GET_FIELD(t_Quaternion, vectorPart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Quaternion__methods_[] = {
        DECLARE_METHOD(t_Quaternion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, add, METH_O),
        DECLARE_METHOD(t_Quaternion, add_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, dotProduct, METH_O),
        DECLARE_METHOD(t_Quaternion, dotProduct_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, equals, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, getConjugate, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getPositivePolarForm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ0, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ1, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ2, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ3, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getScalarPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getVectorPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, isPureQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, isUnitQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, multiply_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, subtract, METH_O),
        DECLARE_METHOD(t_Quaternion, subtract_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Quaternion)[] = {
        { Py_tp_methods, t_Quaternion__methods_ },
        { Py_tp_init, (void *) t_Quaternion_init_ },
        { Py_tp_getset, t_Quaternion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Quaternion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Quaternion, t_Quaternion, Quaternion);

      void t_Quaternion::install(PyObject *module)
      {
        installType(&PY_TYPE(Quaternion), &PY_TYPE_DEF(Quaternion), module, "Quaternion", 0);
      }

      void t_Quaternion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "class_", make_descriptor(Quaternion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "wrapfn_", make_descriptor(t_Quaternion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "boxfn_", make_descriptor(boxObject));
        env->getClass(Quaternion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "I", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "IDENTITY", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::IDENTITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "J", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::J)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "K", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "ZERO", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::ZERO)));
      }

      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Quaternion::initializeClass, 1)))
          return NULL;
        return t_Quaternion::wrap_Object(Quaternion(((t_Quaternion *) arg)->object.this$));
      }
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Quaternion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Quaternion(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = Quaternion(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Quaternion(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::add(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "add_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::dotProduct(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "dotProduct_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 2:
          {
            Quaternion a0((jobject) NULL);
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "kD", Quaternion::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getConjugate());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getInverse(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getNorm(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getQ0(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ1(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ2(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ2());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ3(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ3());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScalarPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVectorPart());
        return result.wrap();
      }

      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isPureQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isPureQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isUnitQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isUnitQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Quaternion a0((jobject) NULL);
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "k", Quaternion::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::multiply(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "multiply_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_normalize(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::subtract(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "subtract_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getConjugate());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ2());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ3());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScalarPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVectorPart());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SolidTides.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SolidTides::class$ = NULL;
        jmethodID *SolidTides::mids$ = NULL;
        bool SolidTides::live$ = false;
        jint SolidTides::DEFAULT_POINTS = (jint) 0;
        jdouble SolidTides::DEFAULT_STEP = (jdouble) 0;

        jclass SolidTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SolidTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9a5efe28259cffe6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_init$_46c73e75ea7ca7a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;ZDILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, const ::org::orekit::utils::IERSConventions & a4, const ::org::orekit::time::UT1Scale & a5, const JArray< ::org::orekit::bodies::CelestialBody > & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a5efe28259cffe6, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jboolean a4, jdouble a5, jint a6, const ::org::orekit::utils::IERSConventions & a7, const ::org::orekit::time::UT1Scale & a8, const JArray< ::org::orekit::bodies::CelestialBody > & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c73e75ea7ca7a5, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7.this$, a8.this$, a9.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolidTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolidTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean SolidTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::stream::Stream SolidTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream SolidTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::java::util::List SolidTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args);
        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self);
        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self);
        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg);
        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self);
        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data);
        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data);
        static PyGetSetDef t_SolidTides__fields_[] = {
          DECLARE_GET_FIELD(t_SolidTides, eventDetectors),
          DECLARE_GET_FIELD(t_SolidTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolidTides__methods_[] = {
          DECLARE_METHOD(t_SolidTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolidTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_SolidTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolidTides)[] = {
          { Py_tp_methods, t_SolidTides__methods_ },
          { Py_tp_init, (void *) t_SolidTides_init_ },
          { Py_tp_getset, t_SolidTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolidTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolidTides, t_SolidTides, SolidTides);

        void t_SolidTides::install(PyObject *module)
        {
          installType(&PY_TYPE(SolidTides), &PY_TYPE_DEF(SolidTides), module, "SolidTides", 0);
        }

        void t_SolidTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "class_", make_descriptor(SolidTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "wrapfn_", make_descriptor(t_SolidTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(SolidTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_POINTS", make_descriptor(SolidTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_STEP", make_descriptor(SolidTides::DEFAULT_STEP));
        }

        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolidTides::initializeClass, 1)))
            return NULL;
          return t_SolidTides::wrap_Object(SolidTides(((t_SolidTides *) arg)->object.this$));
        }
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolidTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::utils::IERSConventions a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::time::UT1Scale a5((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a6((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &p4, ::org::orekit::utils::t_IERSConventions::parameters_, &a5, &a6))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jboolean a4;
              jdouble a5;
              jint a6;
              ::org::orekit::utils::IERSConventions a7((jobject) NULL);
              PyTypeObject **p7;
              ::org::orekit::time::UT1Scale a8((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a9((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKZDIKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &p7, ::org::orekit::utils::t_IERSConventions::parameters_, &a8, &a9))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKCoordinateSystem::class$ = NULL;
        jmethodID *STKEphemerisFile$STKCoordinateSystem::mids$ = NULL;
        bool STKEphemerisFile$STKCoordinateSystem::live$ = false;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::FIXED = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::ICRF = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::INERTIAL = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::J2000 = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE = NULL;

        jclass STKEphemerisFile$STKCoordinateSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_6a887e7a37bc4ab5] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_valueOf_6a887e7a37bc4ab5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_values_eb575a4796ee9b48] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FIXED = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "FIXED", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            ICRF = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            INERTIAL = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "INERTIAL", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            J2000 = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            MEAN_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "MEAN_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TEME_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TEME_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TRUE_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TRUE_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_6a887e7a37bc4ab5], a0.this$));
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6a887e7a37bc4ab5], a0.this$));
        }

        JArray< STKEphemerisFile$STKCoordinateSystem > STKEphemerisFile$STKCoordinateSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< STKEphemerisFile$STKCoordinateSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_eb575a4796ee9b48]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKCoordinateSystem__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKCoordinateSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKCoordinateSystem__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKCoordinateSystem)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKCoordinateSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_STKEphemerisFile$STKCoordinateSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKCoordinateSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKCoordinateSystem, t_STKEphemerisFile$STKCoordinateSystem, STKEphemerisFile$STKCoordinateSystem);
        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(const STKEphemerisFile$STKCoordinateSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_STKEphemerisFile$STKCoordinateSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKCoordinateSystem), &PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem), module, "STKEphemerisFile$STKCoordinateSystem", 0);
        }

        void t_STKEphemerisFile$STKCoordinateSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "class_", make_descriptor(STKEphemerisFile$STKCoordinateSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(STKEphemerisFile$STKCoordinateSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "FIXED", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "ICRF", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::ICRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "INERTIAL", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::INERTIAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "J2000", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::J2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "MEAN_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TEME_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TRUE_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE)));
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(STKEphemerisFile$STKCoordinateSystem(((t_STKEphemerisFile$STKCoordinateSystem *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::parse(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::valueOf(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type)
        {
          JArray< STKEphemerisFile$STKCoordinateSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::values());
          return JArray<jobject>(result.this$).wrap(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject);
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixChangingVisitor::class$ = NULL;
      jmethodID *RealMatrixChangingVisitor::mids$ = NULL;
      bool RealMatrixChangingVisitor::live$ = false;

      jclass RealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_72f52bd4c5831a13] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void RealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      jdouble RealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_72f52bd4c5831a13], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self);
      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixChangingVisitor, t_RealMatrixChangingVisitor, RealMatrixChangingVisitor);

      void t_RealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixChangingVisitor), &PY_TYPE_DEF(RealMatrixChangingVisitor), module, "RealMatrixChangingVisitor", 0);
      }

      void t_RealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "class_", make_descriptor(RealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_RealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixChangingVisitor::wrap_Object(RealMatrixChangingVisitor(((t_RealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2::class$ = NULL;
        jmethodID *UnivariateDerivative2::mids$ = NULL;
        bool UnivariateDerivative2::live$ = false;
        UnivariateDerivative2 *UnivariateDerivative2::PI = NULL;

        jclass UnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4e382a6827bb5ab6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_abs_cdd1771068ccd0b5] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acos_cdd1771068ccd0b5] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acosh_cdd1771068ccd0b5] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_66ee3b720da1aaf5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_701334a489b2bad2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asin_cdd1771068ccd0b5] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asinh_cdd1771068ccd0b5] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan_cdd1771068ccd0b5] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan2_66ee3b720da1aaf5] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atanh_cdd1771068ccd0b5] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cbrt_cdd1771068ccd0b5] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ceil_cdd1771068ccd0b5] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_compareTo_1a7fd47bb0d6c155] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)I");
            mids$[mid_compose_223861db159cf9f6] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_66ee3b720da1aaf5] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_701334a489b2bad2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cos_cdd1771068ccd0b5] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cosh_cdd1771068ccd0b5] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_66ee3b720da1aaf5] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_701334a489b2bad2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_cdd1771068ccd0b5] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_expm1_cdd1771068ccd0b5] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_floor_cdd1771068ccd0b5] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getDerivative_ce4c02d583456bc9] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_2bcf1e61705679e1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_9981f74b2d109da6] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_cdd1771068ccd0b5] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_9981f74b2d109da6] = env->getMethodID(cls, "getSecondDerivative", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_66ee3b720da1aaf5] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_d209bf131297a533] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_38caa929ad27f232] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_35cdb751a5995aca] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_6d60c01cc11cfeb6] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_e9f4e6a9fb34ab9c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_420a8e6f6338a658] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_9016145c55566529] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_fa8b69d0f6ce97f5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log_cdd1771068ccd0b5] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log10_cdd1771068ccd0b5] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log1p_cdd1771068ccd0b5] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_66ee3b720da1aaf5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_701334a489b2bad2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_2d965df6761d39cd] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_negate_cdd1771068ccd0b5] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_newInstance_701334a489b2bad2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_66ee3b720da1aaf5] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_701334a489b2bad2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_2d965df6761d39cd] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_37de0f79fb961e89] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_reciprocal_cdd1771068ccd0b5] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_66ee3b720da1aaf5] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_701334a489b2bad2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rint_cdd1771068ccd0b5] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rootN_2d965df6761d39cd] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_scalb_2d965df6761d39cd] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sign_cdd1771068ccd0b5] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sin_cdd1771068ccd0b5] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_cdd1771068ccd0b5] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_cdd1771068ccd0b5] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_66ee3b720da1aaf5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_701334a489b2bad2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tan_cdd1771068ccd0b5] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tanh_cdd1771068ccd0b5] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_taylor_bf28ed64d6e8576b] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_cdd1771068ccd0b5] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_ce114c5dd035d753] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_cdd1771068ccd0b5] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ulp_cdd1771068ccd0b5] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative2(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative2::UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_4e382a6827bb5ab6, a0.this$)) {}

        UnivariateDerivative2::UnivariateDerivative2(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        UnivariateDerivative2 UnivariateDerivative2::abs() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::asin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::asinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan2(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::atanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cbrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ceil() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_cdd1771068ccd0b5]));
        }

        jint UnivariateDerivative2::compareTo(const UnivariateDerivative2 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_1a7fd47bb0d6c155], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_223861db159cf9f6], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::cos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_701334a489b2bad2], a0));
        }

        jboolean UnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::exp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::expm1() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::floor() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_cdd1771068ccd0b5]));
        }

        jdouble UnivariateDerivative2::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_ce4c02d583456bc9], a0);
        }

        jint UnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field UnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_2bcf1e61705679e1]));
        }

        jdouble UnivariateDerivative2::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_9981f74b2d109da6]);
        }

        jint UnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        UnivariateDerivative2 UnivariateDerivative2::getPi() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_cdd1771068ccd0b5]));
        }

        jdouble UnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        jdouble UnivariateDerivative2::getSecondDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondDerivative_9981f74b2d109da6]);
        }

        jdouble UnivariateDerivative2::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint UnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        UnivariateDerivative2 UnivariateDerivative2::hypot(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_d209bf131297a533], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< UnivariateDerivative2 > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_38caa929ad27f232], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_35cdb751a5995aca], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_6d60c01cc11cfeb6], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_e9f4e6a9fb34ab9c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_420a8e6f6338a658], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5, const UnivariateDerivative2 & a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_9016145c55566529], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5, jdouble a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_fa8b69d0f6ce97f5], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::log() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log10() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log1p() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_2d965df6761d39cd], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::negate() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::newInstance(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_2d965df6761d39cd], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0, const UnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_37de0f79fb961e89], a0, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::reciprocal() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::rint() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::rootN(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_2d965df6761d39cd], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::scalb(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_2d965df6761d39cd], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::sign() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_cdd1771068ccd0b5]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_cdd1771068ccd0b5]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sqrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_66ee3b720da1aaf5], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_701334a489b2bad2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::tan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::tanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_cdd1771068ccd0b5]));
        }

        jdouble UnivariateDerivative2::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_bf28ed64d6e8576b], a0);
        }

        UnivariateDerivative2 UnivariateDerivative2::toDegrees() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_cdd1771068ccd0b5]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_ce114c5dd035d753]));
        }

        UnivariateDerivative2 UnivariateDerivative2::toRadians() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_cdd1771068ccd0b5]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ulp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_cdd1771068ccd0b5]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args);
        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2)[] = {
          { Py_tp_methods, t_UnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative2_init_ },
          { Py_tp_getset, t_UnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2, t_UnivariateDerivative2, UnivariateDerivative2);
        PyObject *t_UnivariateDerivative2::wrap_Object(const UnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2), &PY_TYPE_DEF(UnivariateDerivative2), module, "UnivariateDerivative2", 0);
        }

        void t_UnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "class_", make_descriptor(UnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "wrapfn_", make_descriptor(t_UnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "PI", make_descriptor(t_UnivariateDerivative2::wrap_Object(*UnivariateDerivative2::PI)));
        }

        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2::wrap_Object(UnivariateDerivative2(((t_UnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative2(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariateDerivative2(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &p6, t_UnivariateDerivative2::parameters_, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2::pow(a0, a1));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data)
        {
          UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *SingleParameterFitter::class$ = NULL;
      jmethodID *SingleParameterFitter::mids$ = NULL;
      bool SingleParameterFitter::live$ = false;
      jdouble SingleParameterFitter::MOON_DRACONIC_PULSATION = (jdouble) 0;
      jdouble SingleParameterFitter::SUN_PULSATION = (jdouble) 0;

      jclass SingleParameterFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/SingleParameterFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5bb6c9f94e35e86c] = env->getMethodID(cls, "<init>", "(DDI[D)V");
          mids$[mid_init$_79912345a16e5796] = env->getMethodID(cls, "<init>", "(DDDI[D)V");
          mids$[mid_createDefaultDut1FitterLongTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultDut1FitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultDut1FitterShortTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultDut1FitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterLongTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultNutationFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterShortTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultNutationFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterLongTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultPoleFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterShortTermPrediction_74f8f946d7a10e10] = env->getStaticMethodID(cls, "createDefaultPoleFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MOON_DRACONIC_PULSATION = env->getStaticDoubleField(cls, "MOON_DRACONIC_PULSATION");
          SUN_PULSATION = env->getStaticDoubleField(cls, "SUN_PULSATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jint a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bb6c9f94e35e86c, a0, a1, a2, a3.this$)) {}

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jdouble a2, jint a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_79912345a16e5796, a0, a1, a2, a3, a4.this$)) {}

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterLongTermPrediction_74f8f946d7a10e10]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterShortTermPrediction_74f8f946d7a10e10]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterLongTermPrediction_74f8f946d7a10e10]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterShortTermPrediction_74f8f946d7a10e10]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterLongTermPrediction_74f8f946d7a10e10]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterShortTermPrediction_74f8f946d7a10e10]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type);

      static PyMethodDef t_SingleParameterFitter__methods_[] = {
        DECLARE_METHOD(t_SingleParameterFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingleParameterFitter)[] = {
        { Py_tp_methods, t_SingleParameterFitter__methods_ },
        { Py_tp_init, (void *) t_SingleParameterFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingleParameterFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingleParameterFitter, t_SingleParameterFitter, SingleParameterFitter);

      void t_SingleParameterFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SingleParameterFitter), &PY_TYPE_DEF(SingleParameterFitter), module, "SingleParameterFitter", 0);
      }

      void t_SingleParameterFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "class_", make_descriptor(SingleParameterFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "wrapfn_", make_descriptor(t_SingleParameterFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "boxfn_", make_descriptor(boxObject));
        env->getClass(SingleParameterFitter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "MOON_DRACONIC_PULSATION", make_descriptor(SingleParameterFitter::MOON_DRACONIC_PULSATION));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "SUN_PULSATION", make_descriptor(SingleParameterFitter::SUN_PULSATION));
      }

      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingleParameterFitter::initializeClass, 1)))
          return NULL;
        return t_SingleParameterFitter::wrap_Object(SingleParameterFitter(((t_SingleParameterFitter *) arg)->object.this$));
      }
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingleParameterFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            JArray< jdouble > a3((jobject) NULL);
            SingleParameterFitter object((jobject) NULL);

            if (!parseArgs(args, "DDI[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            JArray< jdouble > a4((jobject) NULL);
            SingleParameterFitter object((jobject) NULL);

            if (!parseArgs(args, "DDDI[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceWriter::class$ = NULL;
            jmethodID *CartesianCovarianceWriter::mids$ = NULL;
            bool CartesianCovarianceWriter::live$ = false;

            jclass CartesianCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_db5fbd02eabc380d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovarianceWriter::CartesianCovarianceWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_db5fbd02eabc380d, a0.this$, a1.this$, a2.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CartesianCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceWriter)[] = {
              { Py_tp_methods, t_CartesianCovarianceWriter__methods_ },
              { Py_tp_init, (void *) t_CartesianCovarianceWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceWriter, t_CartesianCovarianceWriter, CartesianCovarianceWriter);

            void t_CartesianCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceWriter), &PY_TYPE_DEF(CartesianCovarianceWriter), module, "CartesianCovarianceWriter", 0);
            }

            void t_CartesianCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "class_", make_descriptor(CartesianCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "wrapfn_", make_descriptor(t_CartesianCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceWriter::wrap_Object(CartesianCovarianceWriter(((t_CartesianCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              CartesianCovarianceWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CartesianCovarianceWriter(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader$Parser::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader$Parser::mids$ = NULL;
      bool AGILeapSecondFilesLoader$Parser::live$ = false;

      jclass AGILeapSecondFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader$Parser::AGILeapSecondFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::java::util::List AGILeapSecondFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_cf69cc549132f899], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_AGILeapSecondFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader$Parser)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader$Parser, t_AGILeapSecondFilesLoader$Parser, AGILeapSecondFilesLoader$Parser);

      void t_AGILeapSecondFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader$Parser), &PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser), module, "AGILeapSecondFilesLoader$Parser", 0);
      }

      void t_AGILeapSecondFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "class_", make_descriptor(AGILeapSecondFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader$Parser::wrap_Object(AGILeapSecondFilesLoader$Parser(((t_AGILeapSecondFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        AGILeapSecondFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = AGILeapSecondFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer::live$ = false;

            jclass NonLinearConjugateGradientOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_020216b48426b9c5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_4803805e1327034f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDD)V");
                mids$[mid_init$_f0cc6bc70be31bdb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDDLorg/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner;)V");
                mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_020216b48426b9c5, a0.this$, a1.this$)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_4803805e1327034f, a0.this$, a1.this$, a2, a3, a4)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner & a5) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_f0cc6bc70be31bdb, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

            ::org::hipparchus::optim::PointValuePair NonLinearConjugateGradientOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer, t_NonLinearConjugateGradientOptimizer, NonLinearConjugateGradientOptimizer);
            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_Object(const NonLinearConjugateGradientOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer), module, "NonLinearConjugateGradientOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "IdentityPreconditioner", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "Formula", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula)));
            }

            void t_NonLinearConjugateGradientOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "class_", make_descriptor(NonLinearConjugateGradientOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer::wrap_Object(NonLinearConjugateGradientOptimizer(((t_NonLinearConjugateGradientOptimizer *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDD", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner a5((jobject) NULL);
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDDk", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(NonLinearConjugateGradientOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *AbstractAnalyticalPropagator::mids$ = NULL;
        bool AbstractAnalyticalPropagator::live$ = false;

        jclass AbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_781ab98286dad7d5] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_acceptStep_04eb5c834f818438] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_1e982279849c3b65] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_d5d8be0538a03d97], a0.this$);
        }

        void AbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_9f3d902ece22e1af]));
        }

        ::java::util::Collection AbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_781ab98286dad7d5]));
        }

        ::org::orekit::propagation::SpacecraftState AbstractAnalyticalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_aaae977c62060398], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self);
        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, pvProvider),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_AbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalPropagator, t_AbstractAnalyticalPropagator, AbstractAnalyticalPropagator);

        void t_AbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalPropagator), &PY_TYPE_DEF(AbstractAnalyticalPropagator), module, "AbstractAnalyticalPropagator", 0);
        }

        void t_AbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "class_", make_descriptor(AbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_AbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalPropagator::wrap_Object(AbstractAnalyticalPropagator(((t_AbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagatorsParallelizer::class$ = NULL;
      jmethodID *PropagatorsParallelizer::mids$ = NULL;
      bool PropagatorsParallelizer::live$ = false;

      jclass PropagatorsParallelizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagatorsParallelizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_25d7e4c005739722] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/propagation/sampling/MultiSatStepHandler;)V");
          mids$[mid_init$_49c6269dfec11d88] = env->getMethodID(cls, "<init>", "(Ljava/util/List;DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
          mids$[mid_getPropagators_d751c1a57012b438] = env->getMethodID(cls, "getPropagators", "()Ljava/util/List;");
          mids$[mid_propagate_0499dac7e83b853d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, const ::org::orekit::propagation::sampling::MultiSatStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_25d7e4c005739722, a0.this$, a1.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, jdouble a1, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49c6269dfec11d88, a0.this$, a1, a2.this$)) {}

      ::java::util::List PropagatorsParallelizer::getPropagators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPropagators_d751c1a57012b438]));
      }

      ::java::util::List PropagatorsParallelizer::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_propagate_0499dac7e83b853d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self);
      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args);
      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data);
      static PyGetSetDef t_PropagatorsParallelizer__fields_[] = {
        DECLARE_GET_FIELD(t_PropagatorsParallelizer, propagators),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagatorsParallelizer__methods_[] = {
        DECLARE_METHOD(t_PropagatorsParallelizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, getPropagators, METH_NOARGS),
        DECLARE_METHOD(t_PropagatorsParallelizer, propagate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagatorsParallelizer)[] = {
        { Py_tp_methods, t_PropagatorsParallelizer__methods_ },
        { Py_tp_init, (void *) t_PropagatorsParallelizer_init_ },
        { Py_tp_getset, t_PropagatorsParallelizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagatorsParallelizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PropagatorsParallelizer, t_PropagatorsParallelizer, PropagatorsParallelizer);

      void t_PropagatorsParallelizer::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagatorsParallelizer), &PY_TYPE_DEF(PropagatorsParallelizer), module, "PropagatorsParallelizer", 0);
      }

      void t_PropagatorsParallelizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "class_", make_descriptor(PropagatorsParallelizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "wrapfn_", make_descriptor(t_PropagatorsParallelizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagatorsParallelizer::initializeClass, 1)))
          return NULL;
        return t_PropagatorsParallelizer::wrap_Object(PropagatorsParallelizer(((t_PropagatorsParallelizer *) arg)->object.this$));
      }
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagatorsParallelizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::MultiSatStepHandler a1((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a2((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "KDk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(Propagator));
      }

      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.propagate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem::class$ = NULL;
            jmethodID *LeastSquaresProblem::mids$ = NULL;
            bool LeastSquaresProblem::live$ = false;

            jclass LeastSquaresProblem::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem");

                mids$ = new jmethodID[max_mid];
                mids$[mid_evaluate_854ba28c9e2137e8] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getObservationSize_d6ab429752e7c267] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_d6ab429752e7c267] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresProblem::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_854ba28c9e2137e8], a0.this$));
            }

            jint LeastSquaresProblem::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_d6ab429752e7c267]);
            }

            jint LeastSquaresProblem::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_d6ab429752e7c267]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_92d7e8d8d3f1dfcf]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem)[] = {
              { Py_tp_methods, t_LeastSquaresProblem__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::OptimizationProblem),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem, t_LeastSquaresProblem, LeastSquaresProblem);

            void t_LeastSquaresProblem::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem), &PY_TYPE_DEF(LeastSquaresProblem), module, "LeastSquaresProblem", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "Evaluation", make_descriptor(&PY_TYPE_DEF(LeastSquaresProblem$Evaluation)));
            }

            void t_LeastSquaresProblem::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "class_", make_descriptor(LeastSquaresProblem::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "wrapfn_", make_descriptor(t_LeastSquaresProblem::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem::wrap_Object(LeastSquaresProblem(((t_LeastSquaresProblem *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOFType::class$ = NULL;
        jmethodID *EncounterLOFType::mids$ = NULL;
        bool EncounterLOFType::live$ = false;
        EncounterLOFType *EncounterLOFType::DEFAULT = NULL;
        EncounterLOFType *EncounterLOFType::VALSECCHI = NULL;

        jclass EncounterLOFType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOFType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFrame_abab9a391d13d41e] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_getFrame_70acedcccb878876] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_valueOf_cedde1d4636ff382] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/encounter/EncounterLOFType;");
            mids$[mid_values_b60c5fb313152ef2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/encounter/EncounterLOFType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT = new EncounterLOFType(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            VALSECCHI = new EncounterLOFType(env->getStaticObjectField(cls, "VALSECCHI", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_abab9a391d13d41e], a0.this$));
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_70acedcccb878876], a0.this$));
        }

        EncounterLOFType EncounterLOFType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EncounterLOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cedde1d4636ff382], a0.this$));
        }

        JArray< EncounterLOFType > EncounterLOFType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EncounterLOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_b60c5fb313152ef2]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EncounterLOFType_values(PyTypeObject *type);
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data);
        static PyGetSetDef t_EncounterLOFType__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOFType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOFType__methods_[] = {
          DECLARE_METHOD(t_EncounterLOFType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, of_, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOFType)[] = {
          { Py_tp_methods, t_EncounterLOFType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOFType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOFType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EncounterLOFType, t_EncounterLOFType, EncounterLOFType);
        PyObject *t_EncounterLOFType::wrap_Object(const EncounterLOFType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EncounterLOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EncounterLOFType::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOFType), &PY_TYPE_DEF(EncounterLOFType), module, "EncounterLOFType", 0);
        }

        void t_EncounterLOFType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "class_", make_descriptor(EncounterLOFType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "wrapfn_", make_descriptor(t_EncounterLOFType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "boxfn_", make_descriptor(boxObject));
          env->getClass(EncounterLOFType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "DEFAULT", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::DEFAULT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "VALSECCHI", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::VALSECCHI)));
        }

        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOFType::initializeClass, 1)))
            return NULL;
          return t_EncounterLOFType::wrap_Object(EncounterLOFType(((t_EncounterLOFType *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOFType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFrame", args);
          return NULL;
        }

        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EncounterLOFType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::valueOf(a0));
            return t_EncounterLOFType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EncounterLOFType_values(PyTypeObject *type)
        {
          JArray< EncounterLOFType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::values());
          return JArray<jobject>(result.this$).wrap(t_EncounterLOFType::wrap_jobject);
        }
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadataKey::mids$ = NULL;
              bool AttitudeStateHistoryMetadataKey::live$ = false;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_PREV_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::COMMENT = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::NUMBER_STATES = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::RATE_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_A = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_B = NULL;

              jclass AttitudeStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_91af28c6dea84a1d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_31901f62f33de415] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");
                  mids$[mid_values_fa0222e50e0cfb5d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_BASIS = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_BASIS_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_PREV_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  COMMENT = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  EULER_ROT_SEQ = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  NUMBER_STATES = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  RATE_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "RATE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_A = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_B = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_91af28c6dea84a1d], a0.this$, a1.this$, a2.this$);
              }

              AttitudeStateHistoryMetadataKey AttitudeStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_31901f62f33de415], a0.this$));
              }

              JArray< AttitudeStateHistoryMetadataKey > AttitudeStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_fa0222e50e0cfb5d]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadataKey, t_AttitudeStateHistoryMetadataKey, AttitudeStateHistoryMetadataKey);
              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_Object(const AttitudeStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadataKey), &PY_TYPE_DEF(AttitudeStateHistoryMetadataKey), module, "AttitudeStateHistoryMetadataKey", 0);
              }

              void t_AttitudeStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "class_", make_descriptor(AttitudeStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_PREV_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "NUMBER_STATES", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "RATE_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::RATE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_A", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_B", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_B)));
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadataKey::wrap_Object(AttitudeStateHistoryMetadataKey(((t_AttitudeStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseral::class$ = NULL;
            jmethodID *DSSTTesseral::mids$ = NULL;
            bool DSSTTesseral::live$ = false;
            ::java::lang::String *DSSTTesseral::CM_COEFFICIENTS = NULL;
            ::java::lang::String *DSSTTesseral::SHORT_PERIOD_PREFIX = NULL;
            ::java::lang::String *DSSTTesseral::SM_COEFFICIENTS = NULL;

            jclass DSSTTesseral::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f71606b50743134e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_7954047194b7313f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;IIIIIII)V");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "CM_COEFFICIENTS", "Ljava/lang/String;"));
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "SM_COEFFICIENTS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f71606b50743134e, a0.this$, a1, a2.this$)) {}

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7954047194b7313f, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9)) {}

            JArray< jdouble > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTTesseral::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self);
            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg);
            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data);
            static PyGetSetDef t_DSSTTesseral__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseral, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseral__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseral, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseral, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTTesseral, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseral)[] = {
              { Py_tp_methods, t_DSSTTesseral__methods_ },
              { Py_tp_init, (void *) t_DSSTTesseral_init_ },
              { Py_tp_getset, t_DSSTTesseral__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseral)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTTesseral, t_DSSTTesseral, DSSTTesseral);

            void t_DSSTTesseral::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseral), &PY_TYPE_DEF(DSSTTesseral), module, "DSSTTesseral", 0);
            }

            void t_DSSTTesseral::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "class_", make_descriptor(DSSTTesseral::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "wrapfn_", make_descriptor(t_DSSTTesseral::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTTesseral::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "CM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::CM_COEFFICIENTS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTTesseral::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::SM_COEFFICIENTS)));
            }

            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseral::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseral::wrap_Object(DSSTTesseral(((t_DSSTTesseral *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseral::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 10:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  jint a3;
                  jint a4;
                  jint a5;
                  jint a6;
                  jint a7;
                  jint a8;
                  jint a9;
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDkIIIIIII", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonal::class$ = NULL;
            jmethodID *DSSTZonal::mids$ = NULL;
            bool DSSTZonal::live$ = false;
            ::java::lang::String *DSSTZonal::SHORT_PERIOD_PREFIX = NULL;

            jclass DSSTZonal::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_be352c4434e3f895] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_0ce731c83dc2afee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;III)V");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_getProvider_565a812c43763e7b] = env->getMethodID(cls, "getProvider", "()Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be352c4434e3f895, a0.this$)) {}

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ce731c83dc2afee, a0.this$, a1, a2, a3)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider DSSTZonal::getProvider() const
            {
              return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_565a812c43763e7b]));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTZonal::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg);
            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data);
            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data);
            static PyGetSetDef t_DSSTZonal__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonal, parametersDrivers),
              DECLARE_GET_FIELD(t_DSSTZonal, provider),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonal__methods_[] = {
              DECLARE_METHOD(t_DSSTZonal, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, getProvider, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTZonal, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonal)[] = {
              { Py_tp_methods, t_DSSTZonal__methods_ },
              { Py_tp_init, (void *) t_DSSTZonal_init_ },
              { Py_tp_getset, t_DSSTZonal__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonal)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTZonal, t_DSSTZonal, DSSTZonal);

            void t_DSSTZonal::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonal), &PY_TYPE_DEF(DSSTZonal), module, "DSSTZonal", 0);
            }

            void t_DSSTZonal::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "class_", make_descriptor(DSSTZonal::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "wrapfn_", make_descriptor(t_DSSTZonal::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTZonal::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTZonal::SHORT_PERIOD_PREFIX)));
            }

            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonal::initializeClass, 1)))
                return NULL;
              return t_DSSTZonal::wrap_Object(DSSTZonal(((t_DSSTZonal *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonal::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                  {
                    INT_CALL(object = DSSTZonal(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  jint a1;
                  jint a2;
                  jint a3;
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "kIII", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTZonal(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);
              OBJ_CALL(result = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
              OBJ_CALL(value = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_9981f74b2d109da6] = env->getMethodID(cls, "getMaxGrowth", "()D");
            mids$[mid_getMinReduction_9981f74b2d109da6] = env->getMethodID(cls, "getMinReduction", "()D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_9981f74b2d109da6] = env->getMethodID(cls, "getSafety", "()D");
            mids$[mid_integrate_3b00c059d3ccb86d] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
            mids$[mid_setMinReduction_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinReduction", "(D)V");
            mids$[mid_setSafety_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSafety", "(D)V");
            mids$[mid_createInterpolator_044d72e449b4501a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");
            mids$[mid_estimateError_8c458726c8da3a78] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMaxGrowth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_9981f74b2d109da6]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMinReduction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinReduction_9981f74b2d109da6]);
        }

        jint EmbeddedRungeKuttaIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getSafety() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSafety_9981f74b2d109da6]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative EmbeddedRungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3b00c059d3ccb86d], a0.this$, a1.this$, a2));
        }

        void EmbeddedRungeKuttaIntegrator::setMaxGrowth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setMinReduction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_1ad26e8c8c0cd65b], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setSafety(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_1ad26e8c8c0cd65b], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, safety),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaIntegrator, t_EmbeddedRungeKuttaIntegrator, EmbeddedRungeKuttaIntegrator);

        void t_EmbeddedRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator), module, "EmbeddedRungeKuttaIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaIntegrator::wrap_Object(EmbeddedRungeKuttaIntegrator(((t_EmbeddedRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinReduction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSafety());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinReduction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSafety());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonFieldAbstractIntegratedPropagator::live$ = false;

        jclass PythonFieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_70cf68a139c55cb1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_ebf7e979efef9b20] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_3bc41c7526b7eb7c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractIntegratedPropagator::PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_70cf68a139c55cb1, a0.this$, a1.this$, a2.this$)) {}

        void PythonFieldAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldAbstractIntegratedPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractIntegratedPropagator, t_PythonFieldAbstractIntegratedPropagator, PythonFieldAbstractIntegratedPropagator);
        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_Object(const PythonFieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator), module, "PythonFieldAbstractIntegratedPropagator", 1);
        }

        void t_PythonFieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "class_", make_descriptor(PythonFieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;", (void *) t_PythonFieldAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractIntegratedPropagator::wrap_Object(PythonFieldAbstractIntegratedPropagator(((t_PythonFieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::PropagationType a2((jobject) NULL);
          PyTypeObject **p2;
          PythonFieldAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractIntegratedPropagator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldStateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OOOOOO", o0, o1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(::org::hipparchus::ode::FieldODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedExceptionWrapper::class$ = NULL;
        jmethodID *RuggedExceptionWrapper::mids$ = NULL;
        bool RuggedExceptionWrapper::live$ = false;

        jclass RuggedExceptionWrapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedExceptionWrapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9e65da04e332b3db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/errors/RuggedException;)V");
            mids$[mid_getException_c5031b2dac9477b7] = env->getMethodID(cls, "getException", "()Lorg/orekit/rugged/errors/RuggedException;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedExceptionWrapper::RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9e65da04e332b3db, a0.this$)) {}

        ::org::orekit::rugged::errors::RuggedException RuggedExceptionWrapper::getException() const
        {
          return ::org::orekit::rugged::errors::RuggedException(env->callObjectMethod(this$, mids$[mid_getException_c5031b2dac9477b7]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self);
        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data);
        static PyGetSetDef t_RuggedExceptionWrapper__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedExceptionWrapper, exception),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedExceptionWrapper__methods_[] = {
          DECLARE_METHOD(t_RuggedExceptionWrapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, getException, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedExceptionWrapper)[] = {
          { Py_tp_methods, t_RuggedExceptionWrapper__methods_ },
          { Py_tp_init, (void *) t_RuggedExceptionWrapper_init_ },
          { Py_tp_getset, t_RuggedExceptionWrapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedExceptionWrapper)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedExceptionWrapper, t_RuggedExceptionWrapper, RuggedExceptionWrapper);

        void t_RuggedExceptionWrapper::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedExceptionWrapper), &PY_TYPE_DEF(RuggedExceptionWrapper), module, "RuggedExceptionWrapper", 0);
        }

        void t_RuggedExceptionWrapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "class_", make_descriptor(RuggedExceptionWrapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "wrapfn_", make_descriptor(t_RuggedExceptionWrapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedExceptionWrapper::initializeClass, 1)))
            return NULL;
          return t_RuggedExceptionWrapper::wrap_Object(RuggedExceptionWrapper(((t_RuggedExceptionWrapper *) arg)->object.this$));
        }
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedExceptionWrapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::errors::RuggedException a0((jobject) NULL);
          RuggedExceptionWrapper object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::rugged::errors::RuggedException::initializeClass, &a0))
          {
            INT_CALL(object = RuggedExceptionWrapper(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self)
        {
          ::org::orekit::rugged::errors::RuggedException result((jobject) NULL);
          OBJ_CALL(result = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(result);
        }

        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data)
        {
          ::org::orekit::rugged::errors::RuggedException value((jobject) NULL);
          OBJ_CALL(value = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenType::class$ = NULL;
            jmethodID *ScreenType::mids$ = NULL;
            bool ScreenType::live$ = false;
            ScreenType *ScreenType::PC = NULL;
            ScreenType *ScreenType::PC_MAX = NULL;
            ScreenType *ScreenType::SHAPE = NULL;

            jclass ScreenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_7675598731dbf36a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_values_51b3783230e14017] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                PC = new ScreenType(env->getStaticObjectField(cls, "PC", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                PC_MAX = new ScreenType(env->getStaticObjectField(cls, "PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                SHAPE = new ScreenType(env->getStaticObjectField(cls, "SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenType ScreenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7675598731dbf36a], a0.this$));
            }

            JArray< ScreenType > ScreenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenType >(env->callStaticObjectMethod(cls, mids$[mid_values_51b3783230e14017]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args);
            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenType_values(PyTypeObject *type);
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data);
            static PyGetSetDef t_ScreenType__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenType__methods_[] = {
              DECLARE_METHOD(t_ScreenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenType)[] = {
              { Py_tp_methods, t_ScreenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenType, t_ScreenType, ScreenType);
            PyObject *t_ScreenType::wrap_Object(const ScreenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenType::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenType), &PY_TYPE_DEF(ScreenType), module, "ScreenType", 0);
            }

            void t_ScreenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "class_", make_descriptor(ScreenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "wrapfn_", make_descriptor(t_ScreenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC_MAX", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "SHAPE", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::SHAPE)));
            }

            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenType::initializeClass, 1)))
                return NULL;
              return t_ScreenType::wrap_Object(ScreenType(((t_ScreenType *) arg)->object.this$));
            }
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::valueOf(a0));
                return t_ScreenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenType_values(PyTypeObject *type)
            {
              JArray< ScreenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenType::wrap_jobject);
            }
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
