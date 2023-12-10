#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Cdm::class$ = NULL;
            jmethodID *Cdm::mids$ = NULL;
            bool Cdm::live$ = false;
            ::java::lang::String *Cdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Cdm::ROOT = NULL;

            jclass Cdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Cdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6798ac6e0dc04508] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_getDataObject1_0a2387782d958a52] = env->getMethodID(cls, "getDataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getDataObject2_0a2387782d958a52] = env->getMethodID(cls, "getDataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getMetadataObject1_ed7f3d346f5dfc32] = env->getMethodID(cls, "getMetadataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getMetadataObject2_ed7f3d346f5dfc32] = env->getMethodID(cls, "getMetadataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getRelativeMetadata_d2d96fe58613ae06] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getUserDefinedParameters_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedParameters", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Cdm::Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_6798ac6e0dc04508, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject1_0a2387782d958a52]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject2_0a2387782d958a52]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject1_ed7f3d346f5dfc32]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject2_ed7f3d346f5dfc32]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata Cdm::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_d2d96fe58613ae06]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined Cdm::getUserDefinedParameters() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedParameters_8d3e5fabdafb8483]));
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
            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args);
            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Cdm_getDataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getDataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self);
            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self);
            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data);
            static PyGetSetDef t_Cdm__fields_[] = {
              DECLARE_GET_FIELD(t_Cdm, dataObject1),
              DECLARE_GET_FIELD(t_Cdm, dataObject2),
              DECLARE_GET_FIELD(t_Cdm, metadataObject1),
              DECLARE_GET_FIELD(t_Cdm, metadataObject2),
              DECLARE_GET_FIELD(t_Cdm, relativeMetadata),
              DECLARE_GET_FIELD(t_Cdm, userDefinedParameters),
              DECLARE_GET_FIELD(t_Cdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Cdm__methods_[] = {
              DECLARE_METHOD(t_Cdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, of_, METH_VARARGS),
              DECLARE_METHOD(t_Cdm, getDataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getDataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getUserDefinedParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Cdm)[] = {
              { Py_tp_methods, t_Cdm__methods_ },
              { Py_tp_init, (void *) t_Cdm_init_ },
              { Py_tp_getset, t_Cdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Cdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Cdm, t_Cdm, Cdm);
            PyObject *t_Cdm::wrap_Object(const Cdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Cdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Cdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Cdm), &PY_TYPE_DEF(Cdm), module, "Cdm", 0);
            }

            void t_Cdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "class_", make_descriptor(Cdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "wrapfn_", make_descriptor(t_Cdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Cdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Cdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "ROOT", make_descriptor(j2p(*Cdm::ROOT)));
            }

            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Cdm::initializeClass, 1)))
                return NULL;
              return t_Cdm::wrap_Object(Cdm(((t_Cdm *) arg)->object.this$));
            }
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Cdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Cdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Cdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmHeader);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmSegment);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Cdm_getDataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getDataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractScheduler::class$ = NULL;
          jmethodID *PythonAbstractScheduler::mids$ = NULL;
          bool PythonAbstractScheduler::live$ = false;

          jclass PythonAbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_df0efa5394471381] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_measurementIsFeasible_db6d81809797ddaa] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractScheduler::PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_df0efa5394471381, a0.this$, a1.this$)) {}

          void PythonAbstractScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractScheduler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace generation {
          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args);
          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self);
          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args);
          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data);
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data);
          static PyGetSetDef t_PythonAbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, self),
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractScheduler)[] = {
            { Py_tp_methods, t_PythonAbstractScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractScheduler_init_ },
            { Py_tp_getset, t_PythonAbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(PythonAbstractScheduler, t_PythonAbstractScheduler, PythonAbstractScheduler);
          PyObject *t_PythonAbstractScheduler::wrap_Object(const PythonAbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractScheduler), &PY_TYPE_DEF(PythonAbstractScheduler), module, "PythonAbstractScheduler", 1);
          }

          void t_PythonAbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "class_", make_descriptor(PythonAbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "wrapfn_", make_descriptor(t_PythonAbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z", (void *) t_PythonAbstractScheduler_measurementIsFeasible0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractScheduler_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractScheduler::wrap_Object(PythonAbstractScheduler(((t_PythonAbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            PythonAbstractScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = PythonAbstractScheduler(a0, a1));
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

          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args)
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

          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "measurementIsFeasible", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("measurementIsFeasible", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data)
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
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadataKey::class$ = NULL;
              jmethodID *AemMetadataKey::mids$ = NULL;
              bool AemMetadataKey::live$ = false;
              AemMetadataKey *AemMetadataKey::ANGVEL_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_DIR = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::EULER_ROT_SEQ = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_DEGREE = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_METHOD = NULL;
              AemMetadataKey *AemMetadataKey::QUATERNION_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::RATE_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_A = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_B = NULL;
              AemMetadataKey *AemMetadataKey::START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::STOP_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass AemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_698c108dd4fcb3ea] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)Z");
                  mids$[mid_valueOf_d4ad7f0ee397ded2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");
                  mids$[mid_values_dccf89c010ac59ee] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_DIR = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_DIR", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  EULER_ROT_SEQ = new AemMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_DEGREE = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_METHOD = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  QUATERNION_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "QUATERNION_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  RATE_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_A = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_B = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_698c108dd4fcb3ea], a0.this$, a1.this$, a2.this$);
              }

              AemMetadataKey AemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d4ad7f0ee397ded2], a0.this$));
              }

              JArray< AemMetadataKey > AemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_dccf89c010ac59ee]));
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
            namespace aem {
              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data);
              static PyGetSetDef t_AemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadataKey)[] = {
                { Py_tp_methods, t_AemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AemMetadataKey, t_AemMetadataKey, AemMetadataKey);
              PyObject *t_AemMetadataKey::wrap_Object(const AemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadataKey), &PY_TYPE_DEF(AemMetadataKey), module, "AemMetadataKey", 0);
              }

              void t_AemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "class_", make_descriptor(AemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "wrapfn_", make_descriptor(t_AemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ANGVEL_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_DIR", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_METHOD", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "QUATERNION_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::QUATERNION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "RATE_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_A", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_B", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AemMetadataKey::wrap_Object(AemMetadataKey(((t_AemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::valueOf(a0));
                  return t_AemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AemMetadataKey_values(PyTypeObject *type)
              {
                JArray< AemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AemMetadataKey::wrap_jobject);
              }
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CasterRecord::class$ = NULL;
          jmethodID *CasterRecord::mids$ = NULL;
          bool CasterRecord::live$ = false;

          jclass CasterRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CasterRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canReceiveNMEA_b108b35ef48e27bd] = env->getMethodID(cls, "canReceiveNMEA", "()Z");
              mids$[mid_getCountry_11b109bd155ca898] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFallbackHostOrIPAddress_11b109bd155ca898] = env->getMethodID(cls, "getFallbackHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getFallbackPort_570ce0828f81a2c1] = env->getMethodID(cls, "getFallbackPort", "()I");
              mids$[mid_getHostOrIPAddress_11b109bd155ca898] = env->getMethodID(cls, "getHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getLatitude_dff5885c2c873297] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getOperator_11b109bd155ca898] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getPort_570ce0828f81a2c1] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getRecordType_7952bb756bff2dbf] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CasterRecord::CasterRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          jboolean CasterRecord::canReceiveNMEA() const
          {
            return env->callBooleanMethod(this$, mids$[mid_canReceiveNMEA_b108b35ef48e27bd]);
          }

          ::java::lang::String CasterRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_11b109bd155ca898]));
          }

          ::java::lang::String CasterRecord::getFallbackHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFallbackHostOrIPAddress_11b109bd155ca898]));
          }

          jint CasterRecord::getFallbackPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getFallbackPort_570ce0828f81a2c1]);
          }

          ::java::lang::String CasterRecord::getHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHostOrIPAddress_11b109bd155ca898]));
          }

          jdouble CasterRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_dff5885c2c873297]);
          }

          jdouble CasterRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
          }

          ::java::lang::String CasterRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_11b109bd155ca898]));
          }

          jint CasterRecord::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::metric::ntrip::RecordType CasterRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_7952bb756bff2dbf]));
          }

          ::java::lang::String CasterRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_11b109bd155ca898]));
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
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args);
          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self);
          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data);
          static PyGetSetDef t_CasterRecord__fields_[] = {
            DECLARE_GET_FIELD(t_CasterRecord, country),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackHostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackPort),
            DECLARE_GET_FIELD(t_CasterRecord, hostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, latitude),
            DECLARE_GET_FIELD(t_CasterRecord, longitude),
            DECLARE_GET_FIELD(t_CasterRecord, operator),
            DECLARE_GET_FIELD(t_CasterRecord, port),
            DECLARE_GET_FIELD(t_CasterRecord, recordType),
            DECLARE_GET_FIELD(t_CasterRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CasterRecord__methods_[] = {
            DECLARE_METHOD(t_CasterRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, canReceiveNMEA, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_CasterRecord, getSourceIdentifier, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CasterRecord)[] = {
            { Py_tp_methods, t_CasterRecord__methods_ },
            { Py_tp_init, (void *) t_CasterRecord_init_ },
            { Py_tp_getset, t_CasterRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CasterRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(CasterRecord, t_CasterRecord, CasterRecord);

          void t_CasterRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(CasterRecord), &PY_TYPE_DEF(CasterRecord), module, "CasterRecord", 0);
          }

          void t_CasterRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "class_", make_descriptor(CasterRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "wrapfn_", make_descriptor(t_CasterRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CasterRecord::initializeClass, 1)))
              return NULL;
            return t_CasterRecord::wrap_Object(CasterRecord(((t_CasterRecord *) arg)->object.this$));
          }
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CasterRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            CasterRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = CasterRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.canReceiveNMEA());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFallbackHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFallbackPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(CasterRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFallbackHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFallbackPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRange::class$ = NULL;
        jmethodID *BistaticRange::mids$ = NULL;
        bool BistaticRange::live$ = false;
        ::java::lang::String *BistaticRange::MEASUREMENT_TYPE = NULL;

        jclass BistaticRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3001df949fd9e0a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_58e3efb0e9576916] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_58e3efb0e9576916] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRange::BistaticRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3001df949fd9e0a4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_58e3efb0e9576916]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_58e3efb0e9576916]));
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
        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args);
        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data);
        static PyGetSetDef t_BistaticRange__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRange, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRange, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRange__methods_[] = {
          DECLARE_METHOD(t_BistaticRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRange, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRange, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRange)[] = {
          { Py_tp_methods, t_BistaticRange__methods_ },
          { Py_tp_init, (void *) t_BistaticRange_init_ },
          { Py_tp_getset, t_BistaticRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRange, t_BistaticRange, BistaticRange);
        PyObject *t_BistaticRange::wrap_Object(const BistaticRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRange::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRange), &PY_TYPE_DEF(BistaticRange), module, "BistaticRange", 0);
        }

        void t_BistaticRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "class_", make_descriptor(BistaticRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "wrapfn_", make_descriptor(t_BistaticRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRange::initializeClass, 1)))
            return NULL;
          return t_BistaticRange::wrap_Object(BistaticRange(((t_BistaticRange *) arg)->object.this$));
        }
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *InertialFrameId::class$ = NULL;
        jmethodID *InertialFrameId::mids$ = NULL;
        bool InertialFrameId::live$ = false;
        InertialFrameId *InertialFrameId::EME2000 = NULL;
        InertialFrameId *InertialFrameId::GCRF = NULL;
        InertialFrameId *InertialFrameId::MOD = NULL;
        InertialFrameId *InertialFrameId::TOD = NULL;
        InertialFrameId *InertialFrameId::VEIS1950 = NULL;

        jclass InertialFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/InertialFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d7678a38766c964d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/InertialFrameId;");
            mids$[mid_values_92eb941000652e91] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/InertialFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EME2000 = new InertialFrameId(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/rugged/api/InertialFrameId;"));
            GCRF = new InertialFrameId(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/rugged/api/InertialFrameId;"));
            MOD = new InertialFrameId(env->getStaticObjectField(cls, "MOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            TOD = new InertialFrameId(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            VEIS1950 = new InertialFrameId(env->getStaticObjectField(cls, "VEIS1950", "Lorg/orekit/rugged/api/InertialFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialFrameId InertialFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return InertialFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d7678a38766c964d], a0.this$));
        }

        JArray< InertialFrameId > InertialFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< InertialFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_92eb941000652e91]));
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
      namespace api {
        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args);
        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_InertialFrameId_values(PyTypeObject *type);
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data);
        static PyGetSetDef t_InertialFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_InertialFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialFrameId__methods_[] = {
          DECLARE_METHOD(t_InertialFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_InertialFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialFrameId)[] = {
          { Py_tp_methods, t_InertialFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_InertialFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(InertialFrameId, t_InertialFrameId, InertialFrameId);
        PyObject *t_InertialFrameId::wrap_Object(const InertialFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InertialFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InertialFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialFrameId), &PY_TYPE_DEF(InertialFrameId), module, "InertialFrameId", 0);
        }

        void t_InertialFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "class_", make_descriptor(InertialFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "wrapfn_", make_descriptor(t_InertialFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(InertialFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "EME2000", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::EME2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "GCRF", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::GCRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "MOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::MOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "TOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::TOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "VEIS1950", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::VEIS1950)));
        }

        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialFrameId::initializeClass, 1)))
            return NULL;
          return t_InertialFrameId::wrap_Object(InertialFrameId(((t_InertialFrameId *) arg)->object.this$));
        }
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          InertialFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::valueOf(a0));
            return t_InertialFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_InertialFrameId_values(PyTypeObject *type)
        {
          JArray< InertialFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_InertialFrameId::wrap_jobject);
        }
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeMeasurement::class$ = NULL;
        jmethodID *CRD$RangeMeasurement::mids$ = NULL;
        bool CRD$RangeMeasurement::live$ = false;

        jclass CRD$RangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_399a69c3c034fff4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_init$_1f869b32d549ac87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DID)V");
            mids$[mid_init$_94189024dc8d45f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochEvent_570ce0828f81a2c1] = env->getMethodID(cls, "getEpochEvent", "()I");
            mids$[mid_getSnr_dff5885c2c873297] = env->getMethodID(cls, "getSnr", "()D");
            mids$[mid_getSystemConfigurationId_11b109bd155ca898] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeOfFlight_dff5885c2c873297] = env->getMethodID(cls, "getTimeOfFlight", "()D");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399a69c3c034fff4, a0.this$, a1, a2)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f869b32d549ac87, a0.this$, a1, a2, a3)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94189024dc8d45f2, a0.this$, a1, a2, a3, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate CRD$RangeMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jint CRD$RangeMeasurement::getEpochEvent() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochEvent_570ce0828f81a2c1]);
        }

        jdouble CRD$RangeMeasurement::getSnr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSnr_dff5885c2c873297]);
        }

        ::java::lang::String CRD$RangeMeasurement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_11b109bd155ca898]));
        }

        jdouble CRD$RangeMeasurement::getTimeOfFlight() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOfFlight_dff5885c2c873297]);
        }

        ::java::lang::String CRD$RangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
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
      namespace ilrs {
        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$RangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, epochEvent),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, snr),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, timeOfFlight),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getEpochEvent, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSnr, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getTimeOfFlight, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$RangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$RangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeMeasurement, t_CRD$RangeMeasurement, CRD$RangeMeasurement);

        void t_CRD$RangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeMeasurement), &PY_TYPE_DEF(CRD$RangeMeasurement), module, "CRD$RangeMeasurement", 0);
        }

        void t_CRD$RangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "class_", make_descriptor(CRD$RangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "wrapfn_", make_descriptor(t_CRD$RangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeMeasurement::wrap_Object(CRD$RangeMeasurement(((t_CRD$RangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochEvent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSnr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochEvent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSnr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisData::class$ = NULL;
              jmethodID *RtcmEphemerisData::mids$ = NULL;
              bool RtcmEphemerisData::live$ = false;

              jclass RtcmEphemerisData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAccuracyProvider_a15b07e9fc4c4a04] = env->getMethodID(cls, "getAccuracyProvider", "()Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;");
                  mids$[mid_getSatelliteID_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setAccuracyProvider_98dee5f28a9a3d00] = env->getMethodID(cls, "setAccuracyProvider", "(Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;)V");
                  mids$[mid_setSatelliteID_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisData::RtcmEphemerisData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::gnss::metric::messages::common::AccuracyProvider RtcmEphemerisData::getAccuracyProvider() const
              {
                return ::org::orekit::gnss::metric::messages::common::AccuracyProvider(env->callObjectMethod(this$, mids$[mid_getAccuracyProvider_a15b07e9fc4c4a04]));
              }

              jint RtcmEphemerisData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_570ce0828f81a2c1]);
              }

              void RtcmEphemerisData::setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccuracyProvider_98dee5f28a9a3d00], a0.this$);
              }

              void RtcmEphemerisData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_99803b0791f320ff], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmEphemerisData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, accuracyProvider),
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisData__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, getAccuracyProvider, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, setAccuracyProvider, METH_O),
                DECLARE_METHOD(t_RtcmEphemerisData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisData)[] = {
                { Py_tp_methods, t_RtcmEphemerisData__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisData_init_ },
                { Py_tp_getset, t_RtcmEphemerisData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisData, t_RtcmEphemerisData, RtcmEphemerisData);

              void t_RtcmEphemerisData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisData), &PY_TYPE_DEF(RtcmEphemerisData), module, "RtcmEphemerisData", 0);
              }

              void t_RtcmEphemerisData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "class_", make_descriptor(RtcmEphemerisData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "wrapfn_", make_descriptor(t_RtcmEphemerisData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisData::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisData::wrap_Object(RtcmEphemerisData(((t_RtcmEphemerisData *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds)
              {
                RtcmEphemerisData object((jobject) NULL);

                INT_CALL(object = RtcmEphemerisData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(result);
              }

              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAccuracyProvider(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccuracyProvider", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(value);
              }
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccuracyProvider(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accuracyProvider", arg);
                return -1;
              }

              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
                return -1;
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemWriter::class$ = NULL;
              jmethodID *AemWriter::mids$ = NULL;
              bool AemWriter::live$ = false;
              jdouble AemWriter::CCSDS_AEM_VERS = (jdouble) 0;
              jint AemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f30abb95e05bcdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_8059a0fd8d00a118] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/adm/aem/AemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_AEM_VERS = env->getStaticDoubleField(cls, "CCSDS_AEM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemWriter::AemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6f30abb95e05bcdd, a0.this$, a1.this$, a2.this$)) {}
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
            namespace aem {
              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args);
              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data);
              static PyGetSetDef t_AemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemWriter__methods_[] = {
                DECLARE_METHOD(t_AemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemWriter)[] = {
                { Py_tp_methods, t_AemWriter__methods_ },
                { Py_tp_init, (void *) t_AemWriter_init_ },
                { Py_tp_getset, t_AemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AemWriter, t_AemWriter, AemWriter);
              PyObject *t_AemWriter::wrap_Object(const AemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AemWriter), &PY_TYPE_DEF(AemWriter), module, "AemWriter", 0);
              }

              void t_AemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "class_", make_descriptor(AemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "wrapfn_", make_descriptor(t_AemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "CCSDS_AEM_VERS", make_descriptor(AemWriter::CCSDS_AEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "KVN_PADDING_WIDTH", make_descriptor(AemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemWriter::initializeClass, 1)))
                  return NULL;
                return t_AemWriter::wrap_Object(AemWriter(((t_AemWriter *) arg)->object.this$));
              }
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                AemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = AemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(Aem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *BodyFacade::class$ = NULL;
          jmethodID *BodyFacade::mids$ = NULL;
          bool BodyFacade::live$ = false;

          jclass BodyFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/BodyFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b2d579a3fdca1cae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBody;)V");
              mids$[mid_create_99dc00c59c0cc646] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_7c1345ab8c0627cd] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_157161de7288ad09] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_getBody_624686a38a6b107c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BodyFacade::BodyFacade(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2d579a3fdca1cae, a0.this$, a1.this$)) {}

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_99dc00c59c0cc646], a0.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::bodies::CelestialBodies & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_7c1345ab8c0627cd], a0.this$, a1.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::data::DataContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_157161de7288ad09], a0.this$, a1.this$));
          }

          ::org::orekit::bodies::CelestialBody BodyFacade::getBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_624686a38a6b107c]));
          }

          ::java::lang::String BodyFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
        namespace definitions {
          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args);
          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self);
          static PyObject *t_BodyFacade_getName(t_BodyFacade *self);
          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data);
          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data);
          static PyGetSetDef t_BodyFacade__fields_[] = {
            DECLARE_GET_FIELD(t_BodyFacade, body),
            DECLARE_GET_FIELD(t_BodyFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BodyFacade__methods_[] = {
            DECLARE_METHOD(t_BodyFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, create, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, getBody, METH_NOARGS),
            DECLARE_METHOD(t_BodyFacade, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BodyFacade)[] = {
            { Py_tp_methods, t_BodyFacade__methods_ },
            { Py_tp_init, (void *) t_BodyFacade_init_ },
            { Py_tp_getset, t_BodyFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BodyFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BodyFacade, t_BodyFacade, BodyFacade);

          void t_BodyFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(BodyFacade), &PY_TYPE_DEF(BodyFacade), module, "BodyFacade", 0);
          }

          void t_BodyFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "class_", make_descriptor(BodyFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "wrapfn_", make_descriptor(t_BodyFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BodyFacade::initializeClass, 1)))
              return NULL;
            return t_BodyFacade::wrap_Object(BodyFacade(((t_BodyFacade *) arg)->object.this$));
          }
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BodyFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            BodyFacade object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BodyFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "create", args);
            return NULL;
          }

          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self)
          {
            ::org::orekit::bodies::CelestialBody result((jobject) NULL);
            OBJ_CALL(result = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
          }

          static PyObject *t_BodyFacade_getName(t_BodyFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }

          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *IOException::class$ = NULL;
    jmethodID *IOException::mids$ = NULL;
    bool IOException::live$ = false;

    jclass IOException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/IOException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IOException::IOException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    IOException::IOException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    IOException::IOException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    IOException::IOException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IOException__methods_[] = {
      DECLARE_METHOD(t_IOException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IOException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IOException)[] = {
      { Py_tp_methods, t_IOException__methods_ },
      { Py_tp_init, (void *) t_IOException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IOException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(IOException, t_IOException, IOException);

    void t_IOException::install(PyObject *module)
    {
      installType(&PY_TYPE(IOException), &PY_TYPE_DEF(IOException), module, "IOException", 0);
    }

    void t_IOException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "class_", make_descriptor(IOException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "wrapfn_", make_descriptor(t_IOException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IOException::initializeClass, 1)))
        return NULL;
      return t_IOException::wrap_Object(IOException(((t_IOException *) arg)->object.this$));
    }
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IOException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IOException object((jobject) NULL);

          INT_CALL(object = IOException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IOException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *ParametricAcceleration::class$ = NULL;
        jmethodID *ParametricAcceleration::mids$ = NULL;
        bool ParametricAcceleration::live$ = false;

        jclass ParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/ParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_043e9efe19e3b3cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_292f4a8302d10a85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_043e9efe19e3b3cd, a0.this$, a1, a2.this$)) {}

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_292f4a8302d10a85, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        jboolean ParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::stream::Stream ParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream ParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::java::util::List ParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void ParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg);
        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data);
        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data);
        static PyGetSetDef t_ParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_ParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_ParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_ParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_ParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParametricAcceleration)[] = {
          { Py_tp_methods, t_ParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_ParametricAcceleration_init_ },
          { Py_tp_getset, t_ParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ParametricAcceleration, t_ParametricAcceleration, ParametricAcceleration);

        void t_ParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(ParametricAcceleration), &PY_TYPE_DEF(ParametricAcceleration), module, "ParametricAcceleration", 0);
        }

        void t_ParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "class_", make_descriptor(ParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "wrapfn_", make_descriptor(t_ParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_ParametricAcceleration::wrap_Object(ParametricAcceleration(((t_ParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg)
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

        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data)
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
#include "org/orekit/data/ClasspathCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ClasspathCrawler::class$ = NULL;
      jmethodID *ClasspathCrawler::mids$ = NULL;
      bool ClasspathCrawler::live$ = false;

      jclass ClasspathCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ClasspathCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b8ac5bb33398c2cf] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;)V");
          mids$[mid_init$_c976573e5d3f191a] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ClasspathCrawler::ClasspathCrawler(const JArray< ::java::lang::String > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8ac5bb33398c2cf, a0.this$)) {}

      ClasspathCrawler::ClasspathCrawler(const ::java::lang::ClassLoader & a0, const JArray< ::java::lang::String > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c976573e5d3f191a, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ClasspathCrawler__methods_[] = {
        DECLARE_METHOD(t_ClasspathCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ClasspathCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ClasspathCrawler)[] = {
        { Py_tp_methods, t_ClasspathCrawler__methods_ },
        { Py_tp_init, (void *) t_ClasspathCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ClasspathCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ClasspathCrawler, t_ClasspathCrawler, ClasspathCrawler);

      void t_ClasspathCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ClasspathCrawler), &PY_TYPE_DEF(ClasspathCrawler), module, "ClasspathCrawler", 0);
      }

      void t_ClasspathCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "class_", make_descriptor(ClasspathCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "wrapfn_", make_descriptor(t_ClasspathCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ClasspathCrawler::initializeClass, 1)))
          return NULL;
        return t_ClasspathCrawler::wrap_Object(ClasspathCrawler(((t_ClasspathCrawler *) arg)->object.this$));
      }
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ClasspathCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "[s", &a0))
            {
              INT_CALL(object = ClasspathCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            JArray< ::java::lang::String > a1((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "k[s", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ClasspathCrawler(a0, a1));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *EquationsMapper::class$ = NULL;
      jmethodID *EquationsMapper::mids$ = NULL;
      bool EquationsMapper::live$ = false;

      jclass EquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/EquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_a0c637c3f718550b] = env->getMethodID(cls, "extractEquationData", "(I[D)[D");
          mids$[mid_getNumberOfEquations_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_adb6d52e6b8167e8] = env->getMethodID(cls, "insertEquationData", "(I[D[D)V");
          mids$[mid_mapStateAndDerivative_6af71e5b97cf897b] = env->getMethodID(cls, "mapStateAndDerivative", "(D[D[D)Lorg/hipparchus/ode/ODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > EquationsMapper::extractEquationData(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractEquationData_a0c637c3f718550b], a0, a1.this$));
      }

      jint EquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_570ce0828f81a2c1]);
      }

      jint EquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_570ce0828f81a2c1]);
      }

      void EquationsMapper::insertEquationData(jint a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_adb6d52e6b8167e8], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative EquationsMapper::mapStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_6af71e5b97cf897b], a0, a1.this$, a2.this$));
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
      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data);
      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data);
      static PyGetSetDef t_EquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_EquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_EquationsMapper, totalDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquationsMapper__methods_[] = {
        DECLARE_METHOD(t_EquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquationsMapper)[] = {
        { Py_tp_methods, t_EquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EquationsMapper, t_EquationsMapper, EquationsMapper);

      void t_EquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(EquationsMapper), &PY_TYPE_DEF(EquationsMapper), module, "EquationsMapper", 0);
      }

      void t_EquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "class_", make_descriptor(EquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "wrapfn_", make_descriptor(t_EquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquationsMapper::initializeClass, 1)))
          return NULL;
        return t_EquationsMapper::wrap_Object(EquationsMapper(((t_EquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "I[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "java/util/Comparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractLambdaMethod::class$ = NULL;
          jmethodID *AbstractLambdaMethod::mids$ = NULL;
          bool AbstractLambdaMethod::live$ = false;

          jclass AbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_setComparator_aba33752f2449599] = env->getMethodID(cls, "setComparator", "(Ljava/util/Comparator;)V");
              mids$[mid_solveILS_191219eb4c75acaf] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_getDiagReference_60c7040667a7dc5c] = env->getMethodID(cls, "getDiagReference", "()[D");
              mids$[mid_getLowReference_60c7040667a7dc5c] = env->getMethodID(cls, "getLowReference", "()[D");
              mids$[mid_lIndex_819f91eddf220c5b] = env->getMethodID(cls, "lIndex", "(II)I");
              mids$[mid_integerGaussTransformation_6f37635c3285dbdf] = env->getMethodID(cls, "integerGaussTransformation", "(II)V");
              mids$[mid_permutation_bb79ca80d85d0a66] = env->getMethodID(cls, "permutation", "(ID)V");
              mids$[mid_getMaxSolution_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxSolution", "()I");
              mids$[mid_getDecorrelatedReference_60c7040667a7dc5c] = env->getMethodID(cls, "getDecorrelatedReference", "()[D");
              mids$[mid_addSolution_7a441056067c6c5b] = env->getMethodID(cls, "addSolution", "([JD)V");
              mids$[mid_getSolutionsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSolutionsSize", "()I");
              mids$[mid_removeSolution_0fa09c18fee449d5] = env->getMethodID(cls, "removeSolution", "()V");
              mids$[mid_ltdlDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0fa09c18fee449d5] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_0fa09c18fee449d5] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_inverseDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_recoverAmbiguities_1abcd8567321bdbe] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_zIndex_819f91eddf220c5b] = env->getMethodID(cls, "zIndex", "(II)I");
              mids$[mid_getMaxDistance_dff5885c2c873297] = env->getMethodID(cls, "getMaxDistance", "()D");
              mids$[mid_getZInverseTransformationReference_d0635cea09dc178c] = env->getMethodID(cls, "getZInverseTransformationReference", "()[I");
              mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractLambdaMethod::setComparator(const ::java::util::Comparator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setComparator_aba33752f2449599], a0.this$);
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > AbstractLambdaMethod::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_191219eb4c75acaf], a0, a1.this$, a2.this$, a3.this$));
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
        namespace gnss {
          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args);
          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data);
          static PyGetSetDef t_AbstractLambdaMethod__fields_[] = {
            DECLARE_SET_FIELD(t_AbstractLambdaMethod, comparator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_AbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, setComparator, METH_O),
            DECLARE_METHOD(t_AbstractLambdaMethod, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractLambdaMethod)[] = {
            { Py_tp_methods, t_AbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractLambdaMethod, t_AbstractLambdaMethod, AbstractLambdaMethod);

          void t_AbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractLambdaMethod), &PY_TYPE_DEF(AbstractLambdaMethod), module, "AbstractLambdaMethod", 0);
          }

          void t_AbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "class_", make_descriptor(AbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "wrapfn_", make_descriptor(t_AbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_AbstractLambdaMethod::wrap_Object(AbstractLambdaMethod(((t_AbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg)
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(self->object.setComparator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setComparator", arg);
            return NULL;
          }

          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }

          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Comparator value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Comparator::initializeClass, &value))
              {
                INT_CALL(self->object.setComparator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "comparator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/BodyShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AltitudeDetector::class$ = NULL;
        jmethodID *AltitudeDetector::mids$ = NULL;
        bool AltitudeDetector::live$ = false;

        jclass AltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_255e7aecae0d87ec] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_016c693111bbdf71] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_b638f92fce635632] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAltitude_dff5885c2c873297] = env->getMethodID(cls, "getAltitude", "()D");
            mids$[mid_getBodyShape_6f78da94fd048d9d] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_61b3279c75dd8106] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AltitudeDetector::AltitudeDetector(jdouble a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_255e7aecae0d87ec, a0, a1.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_016c693111bbdf71, a0, a1, a2.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b638f92fce635632, a0, a1, a2, a3.this$)) {}

        jdouble AltitudeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble AltitudeDetector::getAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAltitude_dff5885c2c873297]);
        }

        ::org::orekit::bodies::BodyShape AltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_6f78da94fd048d9d]));
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
      namespace events {
        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args);
        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args);
        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data);
        static PyGetSetDef t_AltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_AltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_AltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_AltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_AltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AltitudeDetector)[] = {
          { Py_tp_methods, t_AltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_AltitudeDetector_init_ },
          { Py_tp_getset, t_AltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AltitudeDetector, t_AltitudeDetector, AltitudeDetector);
        PyObject *t_AltitudeDetector::wrap_Object(const AltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AltitudeDetector), &PY_TYPE_DEF(AltitudeDetector), module, "AltitudeDetector", 0);
        }

        void t_AltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "class_", make_descriptor(AltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "wrapfn_", make_descriptor(t_AltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_AltitudeDetector::wrap_Object(AltitudeDetector(((t_AltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AltitudeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
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

        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonUTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *PythonUTCTAIOffsetsLoader::mids$ = NULL;
      bool PythonUTCTAIOffsetsLoader::live$ = false;

      jclass PythonUTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonUTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUTCTAIOffsetsLoader::PythonUTCTAIOffsetsLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonUTCTAIOffsetsLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonUTCTAIOffsetsLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonUTCTAIOffsetsLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self);
      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args);
      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data);
      static PyGetSetDef t_PythonUTCTAIOffsetsLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUTCTAIOffsetsLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_PythonUTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) t_PythonUTCTAIOffsetsLoader_init_ },
        { Py_tp_getset, t_PythonUTCTAIOffsetsLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUTCTAIOffsetsLoader, t_PythonUTCTAIOffsetsLoader, PythonUTCTAIOffsetsLoader);

      void t_PythonUTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUTCTAIOffsetsLoader), &PY_TYPE_DEF(PythonUTCTAIOffsetsLoader), module, "PythonUTCTAIOffsetsLoader", 1);
      }

      void t_PythonUTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "class_", make_descriptor(PythonUTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_PythonUTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUTCTAIOffsetsLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadOffsets", "()Ljava/util/List;", (void *) t_PythonUTCTAIOffsetsLoader_loadOffsets0 },
          { "pythonDecRef", "()V", (void *) t_PythonUTCTAIOffsetsLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_PythonUTCTAIOffsetsLoader::wrap_Object(PythonUTCTAIOffsetsLoader(((t_PythonUTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonUTCTAIOffsetsLoader object((jobject) NULL);

        INT_CALL(object = PythonUTCTAIOffsetsLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "loadOffsets", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("loadOffsets", result);
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

      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorBuilder::class$ = NULL;
        jmethodID *PythonAbstractPropagatorBuilder::mids$ = NULL;
        bool PythonAbstractPropagatorBuilder::live$ = false;

        jclass PythonAbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1af1d7ef33c5abdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DZ)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_7c39c5f4719b16a0] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorBuilder::PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, jboolean a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1af1d7ef33c5abdd, a0.this$, a1.this$, a2, a3)) {}

        void PythonAbstractPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractPropagatorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self);
        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorBuilder, t_PythonAbstractPropagatorBuilder, PythonAbstractPropagatorBuilder);

        void t_PythonAbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorBuilder), &PY_TYPE_DEF(PythonAbstractPropagatorBuilder), module, "PythonAbstractPropagatorBuilder", 1);
        }

        void t_PythonAbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "class_", make_descriptor(PythonAbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonAbstractPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonAbstractPropagatorBuilder_copy2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorBuilder_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorBuilder::wrap_Object(PythonAbstractPropagatorBuilder(((t_PythonAbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jboolean a3;
          PythonAbstractPropagatorBuilder object((jobject) NULL);

          if (!parseArgs(args, "kKDZ", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NtripClient::class$ = NULL;
          jmethodID *NtripClient::mids$ = NULL;
          bool NtripClient::live$ = false;
          jint NtripClient::DEFAULT_MAX_RECONNECT = (jint) 0;
          jint NtripClient::DEFAULT_PORT = (jint) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY = (jdouble) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR = (jdouble) 0;
          jint NtripClient::DEFAULT_TIMEOUT = (jint) 0;

          jclass NtripClient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NtripClient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e227023543046618] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
              mids$[mid_addObserver_922a3de7b65e7005] = env->getMethodID(cls, "addObserver", "(ILjava/lang/String;Lorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_checkException_0fa09c18fee449d5] = env->getMethodID(cls, "checkException", "()V");
              mids$[mid_getHost_11b109bd155ca898] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
              mids$[mid_getPort_570ce0828f81a2c1] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getSourceTable_59aab5a2243e1408] = env->getMethodID(cls, "getSourceTable", "()Lorg/orekit/gnss/metric/ntrip/SourceTable;");
              mids$[mid_setFix_f46d832982d41f6f] = env->getMethodID(cls, "setFix", "(IIDDDDD)V");
              mids$[mid_setReconnectParameters_01fb2c777e5def32] = env->getMethodID(cls, "setReconnectParameters", "(DDI)V");
              mids$[mid_setTimeout_99803b0791f320ff] = env->getMethodID(cls, "setTimeout", "(I)V");
              mids$[mid_startStreaming_5729c8860d8337d0] = env->getMethodID(cls, "startStreaming", "(Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZ)V");
              mids$[mid_stopStreaming_99803b0791f320ff] = env->getMethodID(cls, "stopStreaming", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_MAX_RECONNECT = env->getStaticIntField(cls, "DEFAULT_MAX_RECONNECT");
              DEFAULT_PORT = env->getStaticIntField(cls, "DEFAULT_PORT");
              DEFAULT_RECONNECT_DELAY = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY");
              DEFAULT_RECONNECT_DELAY_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY_FACTOR");
              DEFAULT_TIMEOUT = env->getStaticIntField(cls, "DEFAULT_TIMEOUT");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NtripClient::NtripClient(const ::java::lang::String & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e227023543046618, a0.this$, a1)) {}

          void NtripClient::addObserver(jint a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_922a3de7b65e7005], a0, a1.this$, a2.this$);
          }

          void NtripClient::checkException() const
          {
            env->callVoidMethod(this$, mids$[mid_checkException_0fa09c18fee449d5]);
          }

          ::java::lang::String NtripClient::getHost() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_11b109bd155ca898]));
          }

          jint NtripClient::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::metric::ntrip::SourceTable NtripClient::getSourceTable() const
          {
            return ::org::orekit::gnss::metric::ntrip::SourceTable(env->callObjectMethod(this$, mids$[mid_getSourceTable_59aab5a2243e1408]));
          }

          void NtripClient::setFix(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) const
          {
            env->callVoidMethod(this$, mids$[mid_setFix_f46d832982d41f6f], a0, a1, a2, a3, a4, a5, a6);
          }

          void NtripClient::setReconnectParameters(jdouble a0, jdouble a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setReconnectParameters_01fb2c777e5def32], a0, a1, a2);
          }

          void NtripClient::setTimeout(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeout_99803b0791f320ff], a0);
          }

          void NtripClient::startStreaming(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::ntrip::Type & a1, jboolean a2, jboolean a3) const
          {
            env->callVoidMethod(this$, mids$[mid_startStreaming_5729c8860d8337d0], a0.this$, a1.this$, a2, a3);
          }

          void NtripClient::stopStreaming(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_stopStreaming_99803b0791f320ff], a0);
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
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_checkException(t_NtripClient *self);
          static PyObject *t_NtripClient_getHost(t_NtripClient *self);
          static PyObject *t_NtripClient_getPort(t_NtripClient *self);
          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self);
          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data);
          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data);
          static PyGetSetDef t_NtripClient__fields_[] = {
            DECLARE_GET_FIELD(t_NtripClient, host),
            DECLARE_GET_FIELD(t_NtripClient, port),
            DECLARE_GET_FIELD(t_NtripClient, sourceTable),
            DECLARE_SET_FIELD(t_NtripClient, timeout),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NtripClient__methods_[] = {
            DECLARE_METHOD(t_NtripClient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, checkException, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getHost, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getPort, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getSourceTable, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, setFix, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setReconnectParameters, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setTimeout, METH_O),
            DECLARE_METHOD(t_NtripClient, startStreaming, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, stopStreaming, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NtripClient)[] = {
            { Py_tp_methods, t_NtripClient__methods_ },
            { Py_tp_init, (void *) t_NtripClient_init_ },
            { Py_tp_getset, t_NtripClient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NtripClient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NtripClient, t_NtripClient, NtripClient);

          void t_NtripClient::install(PyObject *module)
          {
            installType(&PY_TYPE(NtripClient), &PY_TYPE_DEF(NtripClient), module, "NtripClient", 0);
          }

          void t_NtripClient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "class_", make_descriptor(NtripClient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "wrapfn_", make_descriptor(t_NtripClient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "boxfn_", make_descriptor(boxObject));
            env->getClass(NtripClient::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_MAX_RECONNECT", make_descriptor(NtripClient::DEFAULT_MAX_RECONNECT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_PORT", make_descriptor(NtripClient::DEFAULT_PORT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY_FACTOR", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_TIMEOUT", make_descriptor(NtripClient::DEFAULT_TIMEOUT));
          }

          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NtripClient::initializeClass, 1)))
              return NULL;
            return t_NtripClient::wrap_Object(NtripClient(((t_NtripClient *) arg)->object.this$));
          }
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NtripClient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            NtripClient object((jobject) NULL);

            if (!parseArgs(args, "sI", &a0, &a1))
            {
              INT_CALL(object = NtripClient(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::MessageObserver a2((jobject) NULL);

            if (!parseArgs(args, "Isk", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addObserver(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_NtripClient_checkException(t_NtripClient *self)
          {
            OBJ_CALL(self->object.checkException());
            Py_RETURN_NONE;
          }

          static PyObject *t_NtripClient_getHost(t_NtripClient *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHost());
            return j2p(result);
          }

          static PyObject *t_NtripClient_getPort(t_NtripClient *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(result);
          }

          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;

            if (!parseArgs(args, "IIDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(self->object.setFix(a0, a1, a2, a3, a4, a5, a6));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFix", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jint a2;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.setReconnectParameters(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReconnectParameters", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setTimeout(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;

            if (!parseArgs(args, "sKZZ", ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.startStreaming(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "startStreaming", args);
            return NULL;
          }

          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.stopStreaming(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "stopStreaming", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHost());
            return j2p(value);
          }

          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(value);
          }

          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setTimeout(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeout", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler$Archive$EntryStream::class$ = NULL;
      jmethodID *ZipJarCrawler$Archive$EntryStream::mids$ = NULL;
      bool ZipJarCrawler$Archive$EntryStream::live$ = false;

      jclass ZipJarCrawler$Archive$EntryStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler$Archive$EntryStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_available_570ce0828f81a2c1] = env->getMethodID(cls, "available", "()I");
          mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isDirectory_b108b35ef48e27bd] = env->getMethodID(cls, "isDirectory", "()Z");
          mids$[mid_mark_99803b0791f320ff] = env->getMethodID(cls, "mark", "(I)V");
          mids$[mid_markSupported_b108b35ef48e27bd] = env->getMethodID(cls, "markSupported", "()Z");
          mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
          mids$[mid_read_5702323b606d072b] = env->getMethodID(cls, "read", "([B)I");
          mids$[mid_read_619434785725cc72] = env->getMethodID(cls, "read", "([BII)I");
          mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ZipJarCrawler$Archive$EntryStream::available() const
      {
        return env->callIntMethod(this$, mids$[mid_available_570ce0828f81a2c1]);
      }

      void ZipJarCrawler$Archive$EntryStream::close() const
      {
        env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
      }

      ::java::lang::String ZipJarCrawler$Archive$EntryStream::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jboolean ZipJarCrawler$Archive$EntryStream::isDirectory() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDirectory_b108b35ef48e27bd]);
      }

      void ZipJarCrawler$Archive$EntryStream::mark(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_mark_99803b0791f320ff], a0);
      }

      jboolean ZipJarCrawler$Archive$EntryStream::markSupported() const
      {
        return env->callBooleanMethod(this$, mids$[mid_markSupported_b108b35ef48e27bd]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read() const
      {
        return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_read_5702323b606d072b], a0.this$);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_read_619434785725cc72], a0.this$, a1, a2);
      }

      void ZipJarCrawler$Archive$EntryStream::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
      }

      jlong ZipJarCrawler$Archive$EntryStream::skip(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyGetSetDef t_ZipJarCrawler$Archive$EntryStream__fields_[] = {
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, directory),
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ZipJarCrawler$Archive$EntryStream__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, available, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, close, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, getName, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, isDirectory, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, mark, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, markSupported, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, read, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, reset, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, skip, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler$Archive$EntryStream)[] = {
        { Py_tp_methods, t_ZipJarCrawler$Archive$EntryStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ZipJarCrawler$Archive$EntryStream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler$Archive$EntryStream)[] = {
        &PY_TYPE_DEF(::java::io::InputStream),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler$Archive$EntryStream, t_ZipJarCrawler$Archive$EntryStream, ZipJarCrawler$Archive$EntryStream);

      void t_ZipJarCrawler$Archive$EntryStream::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler$Archive$EntryStream), &PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream), module, "ZipJarCrawler$Archive$EntryStream", 0);
      }

      void t_ZipJarCrawler$Archive$EntryStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "class_", make_descriptor(ZipJarCrawler$Archive$EntryStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "wrapfn_", make_descriptor(t_ZipJarCrawler$Archive$EntryStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler$Archive$EntryStream::wrap_Object(ZipJarCrawler$Archive$EntryStream(((t_ZipJarCrawler$Archive$EntryStream *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.available());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "available", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.close());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "close", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDirectory());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.mark(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "mark", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.markSupported());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "markSupported", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.read());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(result = self->object.read(a0));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.read(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "read", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "reset", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jlong a0;
        jlong result;

        if (!parseArgs(args, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "skip", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDirectory());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
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
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ImpulseManeuver::class$ = NULL;
        jmethodID *ImpulseManeuver::mids$ = NULL;
        bool ImpulseManeuver::live$ = false;

        jclass ImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_33ff2531f6afe54b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_6e35dd1e707d55ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_d5a1eb9188b4db60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAttitudeOverride_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_d52645e0d4c07563] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getIsp_dff5885c2c873297] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getTrigger_d73bb985ffde4156] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_6b5d818a71042d92] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/forces/maneuvers/ImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_33ff2531f6afe54b, a0.this$, a1.this$, a2)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6e35dd1e707d55ce, a0.this$, a1.this$, a2.this$, a3)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d5a1eb9188b4db60, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        jdouble ImpulseManeuver::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::attitudes::AttitudeProvider ImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_a904f3d015a354a0]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType ImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_d52645e0d4c07563]));
        }

        jdouble ImpulseManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_dff5885c2c873297]);
        }

        ::org::orekit::propagation::events::EventDetector ImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_d73bb985ffde4156]));
        }

        void ImpulseManeuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args);
        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data);
        static PyGetSetDef t_ImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_ImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_ImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_ImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_ImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_ImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_ImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ImpulseManeuver)[] = {
          { Py_tp_methods, t_ImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_ImpulseManeuver_init_ },
          { Py_tp_getset, t_ImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ImpulseManeuver, t_ImpulseManeuver, ImpulseManeuver);
        PyObject *t_ImpulseManeuver::wrap_Object(const ImpulseManeuver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ImpulseManeuver), &PY_TYPE_DEF(ImpulseManeuver), module, "ImpulseManeuver", 0);
        }

        void t_ImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "class_", make_descriptor(ImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "wrapfn_", make_descriptor(t_ImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_ImpulseManeuver::wrap_Object(ImpulseManeuver(((t_ImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkDK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
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

        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIsp());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile::class$ = NULL;
        jmethodID *AttitudeEphemerisFile::mids$ = NULL;
        bool AttitudeEphemerisFile::live$ = false;

        jclass AttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map AttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self);
        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data);
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, satellites),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile, t_AttitudeEphemerisFile, AttitudeEphemerisFile);
        PyObject *t_AttitudeEphemerisFile::wrap_Object(const AttitudeEphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile), &PY_TYPE_DEF(AttitudeEphemerisFile), module, "AttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "AttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "SatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)));
        }

        void t_AttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "class_", make_descriptor(AttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile::wrap_Object(AttitudeEphemerisFile(((t_AttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *LazyLoadedGeoMagneticFields::class$ = NULL;
        jmethodID *LazyLoadedGeoMagneticFields::mids$ = NULL;
        bool LazyLoadedGeoMagneticFields::live$ = false;

        jclass LazyLoadedGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/LazyLoadedGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ce23204880a56c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
            mids$[mid_getField_4aeee65bc3c68b0b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_11ad1d91265636f7] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_11ad1d91265636f7] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LazyLoadedGeoMagneticFields::LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ce23204880a56c8, a0.this$)) {}

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_4aeee65bc3c68b0b], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_11ad1d91265636f7], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_11ad1d91265636f7], a0));
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
    namespace models {
      namespace earth {
        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args);
        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_LazyLoadedGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGeoMagneticFields)[] = {
          { Py_tp_methods, t_LazyLoadedGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_LazyLoadedGeoMagneticFields_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LazyLoadedGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LazyLoadedGeoMagneticFields, t_LazyLoadedGeoMagneticFields, LazyLoadedGeoMagneticFields);

        void t_LazyLoadedGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(LazyLoadedGeoMagneticFields), &PY_TYPE_DEF(LazyLoadedGeoMagneticFields), module, "LazyLoadedGeoMagneticFields", 0);
        }

        void t_LazyLoadedGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "class_", make_descriptor(LazyLoadedGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "wrapfn_", make_descriptor(t_LazyLoadedGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_LazyLoadedGeoMagneticFields::wrap_Object(LazyLoadedGeoMagneticFields(((t_LazyLoadedGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
          LazyLoadedGeoMagneticFields object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
          {
            INT_CALL(object = LazyLoadedGeoMagneticFields(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCGScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCGScale::class$ = NULL;
      jmethodID *TCGScale::mids$ = NULL;
      bool TCGScale::live$ = false;

      jclass TCGScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCGScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCGScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble TCGScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCGScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String TCGScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_getName(t_TCGScale *self);
      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data);
      static PyGetSetDef t_TCGScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCGScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCGScale__methods_[] = {
        DECLARE_METHOD(t_TCGScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCGScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCGScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCGScale)[] = {
        { Py_tp_methods, t_TCGScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCGScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCGScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCGScale, t_TCGScale, TCGScale);

      void t_TCGScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCGScale), &PY_TYPE_DEF(TCGScale), module, "TCGScale", 0);
      }

      void t_TCGScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "class_", make_descriptor(TCGScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "wrapfn_", make_descriptor(t_TCGScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCGScale::initializeClass, 1)))
          return NULL;
        return t_TCGScale::wrap_Object(TCGScale(((t_TCGScale *) arg)->object.this$));
      }
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCGScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCGScale_getName(t_TCGScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args)
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

      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCGScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data)
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
#include "org/orekit/data/PolynomialNutation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialNutation::class$ = NULL;
      jmethodID *PolynomialNutation::mids$ = NULL;
      bool PolynomialNutation::live$ = false;

      jclass PolynomialNutation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialNutation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_derivative_dcbc7ce2902fa136] = env->getMethodID(cls, "derivative", "(D)D");
          mids$[mid_derivative_a4b1871f4d29e58b] = env->getMethodID(cls, "derivative", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialNutation::PolynomialNutation(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      jdouble PolynomialNutation::derivative(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_derivative_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::derivative(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_derivative_a4b1871f4d29e58b], a0.this$));
      }

      jdouble PolynomialNutation::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args);
      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args);

      static PyMethodDef t_PolynomialNutation__methods_[] = {
        DECLARE_METHOD(t_PolynomialNutation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialNutation, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialNutation)[] = {
        { Py_tp_methods, t_PolynomialNutation__methods_ },
        { Py_tp_init, (void *) t_PolynomialNutation_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialNutation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialNutation, t_PolynomialNutation, PolynomialNutation);

      void t_PolynomialNutation::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialNutation), &PY_TYPE_DEF(PolynomialNutation), module, "PolynomialNutation", 0);
      }

      void t_PolynomialNutation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "class_", make_descriptor(PolynomialNutation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "wrapfn_", make_descriptor(t_PolynomialNutation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialNutation::initializeClass, 1)))
          return NULL;
        return t_PolynomialNutation::wrap_Object(PolynomialNutation(((t_PolynomialNutation *) arg)->object.this$));
      }
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialNutation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialNutation object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = PolynomialNutation(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *RadiationSensitive::class$ = NULL;
        jmethodID *RadiationSensitive::mids$ = NULL;
        bool RadiationSensitive::live$ = false;
        ::java::lang::String *RadiationSensitive::ABSORPTION_COEFFICIENT = NULL;
        ::java::lang::String *RadiationSensitive::GLOBAL_RADIATION_FACTOR = NULL;
        ::java::lang::String *RadiationSensitive::REFLECTION_COEFFICIENT = NULL;

        jclass RadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/RadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABSORPTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ABSORPTION_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_RADIATION_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_RADIATION_FACTOR", "Ljava/lang/String;"));
            REFLECTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "REFLECTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List RadiationSensitive::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_2afa36052df4765d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_c01594a6748cab78], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self);
        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args);
        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data);
        static PyGetSetDef t_RadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_RadiationSensitive, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_RadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_RadiationSensitive, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RadiationSensitive)[] = {
          { Py_tp_methods, t_RadiationSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RadiationSensitive, t_RadiationSensitive, RadiationSensitive);

        void t_RadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(RadiationSensitive), &PY_TYPE_DEF(RadiationSensitive), module, "RadiationSensitive", 0);
        }

        void t_RadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "class_", make_descriptor(RadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "wrapfn_", make_descriptor(t_RadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(RadiationSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "ABSORPTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::ABSORPTION_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "GLOBAL_RADIATION_FACTOR", make_descriptor(j2p(*RadiationSensitive::GLOBAL_RADIATION_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "REFLECTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::REFLECTION_COEFFICIENT)));
        }

        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_RadiationSensitive::wrap_Object(RadiationSensitive(((t_RadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationTimeScale::class$ = NULL;
      jmethodID *ObservationTimeScale::mids$ = NULL;
      bool ObservationTimeScale::live$ = false;
      ObservationTimeScale *ObservationTimeScale::BDT = NULL;
      ObservationTimeScale *ObservationTimeScale::GAL = NULL;
      ObservationTimeScale *ObservationTimeScale::GLO = NULL;
      ObservationTimeScale *ObservationTimeScale::GPS = NULL;
      ObservationTimeScale *ObservationTimeScale::IRN = NULL;
      ObservationTimeScale *ObservationTimeScale::QZS = NULL;

      jclass ObservationTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getTimeScale_1598586664182696] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_valueOf_f1ab4c8d160d1d07] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_values_47242b2049afa44b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationTimeScale;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BDT = new ObservationTimeScale(env->getStaticObjectField(cls, "BDT", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GAL = new ObservationTimeScale(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GLO = new ObservationTimeScale(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GPS = new ObservationTimeScale(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          IRN = new ObservationTimeScale(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/gnss/ObservationTimeScale;"));
          QZS = new ObservationTimeScale(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeScale ObservationTimeScale::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_1598586664182696], a0.this$));
      }

      ObservationTimeScale ObservationTimeScale::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationTimeScale(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f1ab4c8d160d1d07], a0.this$));
      }

      JArray< ObservationTimeScale > ObservationTimeScale::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationTimeScale >(env->callStaticObjectMethod(cls, mids$[mid_values_47242b2049afa44b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args);
      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg);
      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type);
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data);
      static PyGetSetDef t_ObservationTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationTimeScale, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationTimeScale__methods_[] = {
        DECLARE_METHOD(t_ObservationTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationTimeScale, getTimeScale, METH_O),
        DECLARE_METHOD(t_ObservationTimeScale, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationTimeScale)[] = {
        { Py_tp_methods, t_ObservationTimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationTimeScale, t_ObservationTimeScale, ObservationTimeScale);
      PyObject *t_ObservationTimeScale::wrap_Object(const ObservationTimeScale& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationTimeScale::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationTimeScale), &PY_TYPE_DEF(ObservationTimeScale), module, "ObservationTimeScale", 0);
      }

      void t_ObservationTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "class_", make_descriptor(ObservationTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "wrapfn_", make_descriptor(t_ObservationTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationTimeScale::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "BDT", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::BDT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GAL", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GLO", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GLO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GPS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "IRN", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::IRN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "QZS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::QZS)));
      }

      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationTimeScale::initializeClass, 1)))
          return NULL;
        return t_ObservationTimeScale::wrap_Object(ObservationTimeScale(((t_ObservationTimeScale *) arg)->object.this$));
      }
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationTimeScale result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::valueOf(a0));
          return t_ObservationTimeScale::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type)
      {
        JArray< ObservationTimeScale > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationTimeScale::wrap_jobject);
      }
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateJacobian.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateJacobian::class$ = NULL;
      jmethodID *StateJacobian::mids$ = NULL;
      bool StateJacobian::live$ = false;

      jclass StateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f910011805e7fdeb] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > StateJacobian::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_f910011805e7fdeb], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg);

      static PyMethodDef t_StateJacobian__methods_[] = {
        DECLARE_METHOD(t_StateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateJacobian)[] = {
        { Py_tp_methods, t_StateJacobian__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateJacobian, t_StateJacobian, StateJacobian);

      void t_StateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(StateJacobian), &PY_TYPE_DEF(StateJacobian), module, "StateJacobian", 0);
      }

      void t_StateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "class_", make_descriptor(StateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "wrapfn_", make_descriptor(t_StateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateJacobian::initializeClass, 1)))
          return NULL;
        return t_StateJacobian::wrap_Object(StateJacobian(((t_StateJacobian *) arg)->object.this$));
      }
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerIntegratorBuilder::class$ = NULL;
        jmethodID *EulerIntegratorBuilder::mids$ = NULL;
        bool EulerIntegratorBuilder::live$ = false;

        jclass EulerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegratorBuilder::EulerIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator EulerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_EulerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EulerIntegratorBuilder, t_EulerIntegratorBuilder, EulerIntegratorBuilder);

        void t_EulerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegratorBuilder), &PY_TYPE_DEF(EulerIntegratorBuilder), module, "EulerIntegratorBuilder", 0);
        }

        void t_EulerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "class_", make_descriptor(EulerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerIntegratorBuilder::wrap_Object(EulerIntegratorBuilder(((t_EulerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
