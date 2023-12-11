#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *MagneticFieldDetector::class$ = NULL;
        jmethodID *MagneticFieldDetector::mids$ = NULL;
        bool MagneticFieldDetector::live$ = false;

        jclass MagneticFieldDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/MagneticFieldDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_68033445f345c9ef] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_3174aec7a05af877] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_9aeefe4c3d3f0311] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_e65cd52fbc7968aa] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_fd36477aa8336cad] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/MagneticFieldDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_68033445f345c9ef, a0, a1.this$, a2.this$)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jboolean a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3174aec7a05af877, a0, a1.this$, a2.this$, a3)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9aeefe4c3d3f0311, a0, a1, a2, a3.this$, a4.this$, a5)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5, const ::org::orekit::data::DataContext & a6) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e65cd52fbc7968aa, a0, a1, a2, a3.this$, a4.this$, a5, a6.this$)) {}

        jdouble MagneticFieldDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        void MagneticFieldDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args);
        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data);
        static PyGetSetDef t_MagneticFieldDetector__fields_[] = {
          DECLARE_GET_FIELD(t_MagneticFieldDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MagneticFieldDetector__methods_[] = {
          DECLARE_METHOD(t_MagneticFieldDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MagneticFieldDetector)[] = {
          { Py_tp_methods, t_MagneticFieldDetector__methods_ },
          { Py_tp_init, (void *) t_MagneticFieldDetector_init_ },
          { Py_tp_getset, t_MagneticFieldDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MagneticFieldDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(MagneticFieldDetector, t_MagneticFieldDetector, MagneticFieldDetector);
        PyObject *t_MagneticFieldDetector::wrap_Object(const MagneticFieldDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MagneticFieldDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MagneticFieldDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(MagneticFieldDetector), &PY_TYPE_DEF(MagneticFieldDetector), module, "MagneticFieldDetector", 0);
        }

        void t_MagneticFieldDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "class_", make_descriptor(MagneticFieldDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "wrapfn_", make_descriptor(t_MagneticFieldDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MagneticFieldDetector::initializeClass, 1)))
            return NULL;
          return t_MagneticFieldDetector::wrap_Object(MagneticFieldDetector(((t_MagneticFieldDetector *) arg)->object.this$));
        }
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MagneticFieldDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jboolean a3;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2, &a3))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 6:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              ::org::orekit::data::DataContext a6((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5, &a6))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
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

        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmDataKey::class$ = NULL;
            jmethodID *TdmDataKey::mids$ = NULL;
            bool TdmDataKey::live$ = false;
            TdmDataKey *TdmDataKey::COMMENT = NULL;
            TdmDataKey *TdmDataKey::EPOCH = NULL;
            TdmDataKey *TdmDataKey::observation = NULL;

            jclass TdmDataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmDataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_ecebd077d5e99789] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_valueOf_f2d608ce921e7f7a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");
                mids$[mid_values_ee598c15726670bc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new TdmDataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                EPOCH = new TdmDataKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                observation = new TdmDataKey(env->getStaticObjectField(cls, "observation", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmDataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_ecebd077d5e99789], a0.this$, a1.this$, a2.this$);
            }

            TdmDataKey TdmDataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmDataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f2d608ce921e7f7a], a0.this$));
            }

            JArray< TdmDataKey > TdmDataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmDataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ee598c15726670bc]));
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
          namespace tdm {
            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmDataKey_values(PyTypeObject *type);
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data);
            static PyGetSetDef t_TdmDataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmDataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmDataKey__methods_[] = {
              DECLARE_METHOD(t_TdmDataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmDataKey)[] = {
              { Py_tp_methods, t_TdmDataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmDataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmDataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmDataKey, t_TdmDataKey, TdmDataKey);
            PyObject *t_TdmDataKey::wrap_Object(const TdmDataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmDataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmDataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmDataKey), &PY_TYPE_DEF(TdmDataKey), module, "TdmDataKey", 0);
            }

            void t_TdmDataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "class_", make_descriptor(TdmDataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "wrapfn_", make_descriptor(t_TdmDataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmDataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "COMMENT", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "EPOCH", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "observation", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::observation)));
            }

            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmDataKey::initializeClass, 1)))
                return NULL;
              return t_TdmDataKey::wrap_Object(TdmDataKey(((t_TdmDataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmDataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmDataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::valueOf(a0));
                return t_TdmDataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmDataKey_values(PyTypeObject *type)
            {
              JArray< TdmDataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmDataKey::wrap_jobject);
            }
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmDataSubStructureKey::class$ = NULL;
              jmethodID *OcmDataSubStructureKey::mids$ = NULL;
              bool OcmDataSubStructureKey::live$ = false;
              OcmDataSubStructureKey *OcmDataSubStructureKey::COV = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::MAN = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::OD = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PERT = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PHYS = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::TRAJ = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::USER = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::cov = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::man = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::od = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::pert = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::phys = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::traj = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::user = NULL;

              jclass OcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_bf06d30c4975f5ed] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;)Z");
                  mids$[mid_valueOf_7121bc0aab7978c0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");
                  mids$[mid_values_cb31fddb8b956040] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  MAN = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  OD = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PERT = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PHYS = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  TRAJ = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "TRAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  USER = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  cov = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  man = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  od = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "od", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  pert = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "pert", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  phys = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  traj = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "traj", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  user = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_bf06d30c4975f5ed], a0.this$, a1.this$);
              }

              OcmDataSubStructureKey OcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7121bc0aab7978c0], a0.this$));
              }

              JArray< OcmDataSubStructureKey > OcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_cb31fddb8b956040]));
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_OcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_OcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_OcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmDataSubStructureKey, t_OcmDataSubStructureKey, OcmDataSubStructureKey);
              PyObject *t_OcmDataSubStructureKey::wrap_Object(const OcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmDataSubStructureKey), &PY_TYPE_DEF(OcmDataSubStructureKey), module, "OcmDataSubStructureKey", 0);
              }

              void t_OcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "class_", make_descriptor(OcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "wrapfn_", make_descriptor(t_OcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "COV", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "MAN", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "OD", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PERT", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PHYS", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "TRAJ", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::TRAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "USER", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "cov", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "man", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "od", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::od)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "pert", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::pert)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "phys", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "traj", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::traj)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "user", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::user)));
              }

              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_OcmDataSubStructureKey::wrap_Object(OcmDataSubStructureKey(((t_OcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::valueOf(a0));
                  return t_OcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< OcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *Atmosphere::class$ = NULL;
          jmethodID *Atmosphere::mids$ = NULL;
          bool Atmosphere::live$ = false;

          jclass Atmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/Atmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_12776b6e8e044274] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_4b2e058d0b26ef39] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement Atmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          jdouble Atmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame Atmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Atmosphere::getVelocity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_12776b6e8e044274], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Atmosphere::getVelocity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_4b2e058d0b26ef39], a0.this$, a1.this$, a2.this$));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self);
          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data);
          static PyGetSetDef t_Atmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_Atmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Atmosphere__methods_[] = {
            DECLARE_METHOD(t_Atmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_Atmosphere, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_Atmosphere, getVelocity, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Atmosphere)[] = {
            { Py_tp_methods, t_Atmosphere__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Atmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Atmosphere)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(Atmosphere, t_Atmosphere, Atmosphere);

          void t_Atmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(Atmosphere), &PY_TYPE_DEF(Atmosphere), module, "Atmosphere", 0);
          }

          void t_Atmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "class_", make_descriptor(Atmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "wrapfn_", make_descriptor(t_Atmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Atmosphere::initializeClass, 1)))
              return NULL;
            return t_Atmosphere::wrap_Object(Atmosphere(((t_Atmosphere *) arg)->object.this$));
          }
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Atmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getVelocity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericModel::class$ = NULL;
          jmethodID *IonosphericModel::mids$ = NULL;
          bool IonosphericModel::live$ = false;

          jclass IonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement IonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble IonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args);

          static PyMethodDef t_IonosphericModel__methods_[] = {
            DECLARE_METHOD(t_IonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericModel)[] = {
            { Py_tp_methods, t_IonosphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(IonosphericModel, t_IonosphericModel, IonosphericModel);

          void t_IonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericModel), &PY_TYPE_DEF(IonosphericModel), module, "IonosphericModel", 0);
          }

          void t_IonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "class_", make_descriptor(IonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "wrapfn_", make_descriptor(t_IonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericModel::initializeClass, 1)))
              return NULL;
            return t_IonosphericModel::wrap_Object(IonosphericModel(((t_IonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractFieldIntegrator::class$ = NULL;
      jmethodID *AbstractFieldIntegrator::mids$ = NULL;
      bool AbstractFieldIntegrator::live$ = false;

      jclass AbstractFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_7951513ad7dd1f46] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_f4eae0b3d6c5e2af] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_01ea5dfa7056a45c] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_67a274b4fbd2dca4] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCurrentSignedStepsize_613c8f46c659f636] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_45f3e0f3929fa6d9] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_isLastStep_89b302893bdbe1f1] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_acceptStep_af2dbfdaa0a94b4d] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_sanityChecks_ee2fc63f2a26c007] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initIntegration_dd582e1c9ef253c9] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setStepStart_747fee420c9ba889] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_ed2afdb8506b9742] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_setStepSize_1ee4bed350fde589] = env->getMethodID(cls, "setStepSize", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getStepSize_613c8f46c659f636] = env->getMethodID(cls, "getStepSize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_resetOccurred_89b302893bdbe1f1] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_6b990ae2bfbec1f3] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/FieldExpandableODE;");
          mids$[mid_getEvaluationsCounter_d3591c1ea177be92] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_ed2afdb8506b9742] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractFieldIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_7951513ad7dd1f46], a0.this$);
      }

      void AbstractFieldIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_f4eae0b3d6c5e2af], a0.this$);
      }

      void AbstractFieldIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_01ea5dfa7056a45c], a0.this$);
      }

      void AbstractFieldIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0640e6acf969ed28]);
      }

      void AbstractFieldIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0640e6acf969ed28]);
      }

      void AbstractFieldIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > AbstractFieldIntegrator::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_67a274b4fbd2dca4], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_613c8f46c659f636]));
      }

      jint AbstractFieldIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      ::java::util::List AbstractFieldIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_0d9551367f7ecdef]));
      }

      ::org::hipparchus::Field AbstractFieldIntegrator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      jint AbstractFieldIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
      }

      ::java::lang::String AbstractFieldIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_0d9551367f7ecdef]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_0d9551367f7ecdef]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_45f3e0f3929fa6d9]));
      }

      void AbstractFieldIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_a3da1a935cb37f7b], a0);
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
      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data);
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data);
      static PyGetSetDef t_AbstractFieldIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, eventDetectors),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, field),
        DECLARE_GETSET_FIELD(t_AbstractFieldIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepStart),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegrator)[] = {
        { Py_tp_methods, t_AbstractFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldIntegrator, t_AbstractFieldIntegrator, AbstractFieldIntegrator);
      PyObject *t_AbstractFieldIntegrator::wrap_Object(const AbstractFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldIntegrator), &PY_TYPE_DEF(AbstractFieldIntegrator), module, "AbstractFieldIntegrator", 0);
      }

      void t_AbstractFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "class_", make_descriptor(AbstractFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "wrapfn_", make_descriptor(t_AbstractFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldIntegrator::wrap_Object(AbstractFieldIntegrator(((t_AbstractFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/LoxodromeArc.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LoxodromeArc::class$ = NULL;
      jmethodID *LoxodromeArc::mids$ = NULL;
      bool LoxodromeArc::live$ = false;

      jclass LoxodromeArc::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LoxodromeArc");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_51c0ede7fd3ca4a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_8edee3a2b13af932] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_calculatePointAlongArc_fdfcc3c813d87498] = env->getMethodID(cls, "calculatePointAlongArc", "(D)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getDistance_557b8123390d8d0c] = env->getMethodID(cls, "getDistance", "()D");
          mids$[mid_getFinalPoint_8672b163b0e4a5a3] = env->getMethodID(cls, "getFinalPoint", "()Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_51c0ede7fd3ca4a5, a0.this$, a1.this$, a2.this$)) {}

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_8edee3a2b13af932, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::calculatePointAlongArc(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_calculatePointAlongArc_fdfcc3c813d87498], a0));
      }

      jdouble LoxodromeArc::getDistance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::getFinalPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getFinalPoint_8672b163b0e4a5a3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg);
      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data);
      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data);
      static PyGetSetDef t_LoxodromeArc__fields_[] = {
        DECLARE_GET_FIELD(t_LoxodromeArc, distance),
        DECLARE_GET_FIELD(t_LoxodromeArc, finalPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoxodromeArc__methods_[] = {
        DECLARE_METHOD(t_LoxodromeArc, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, calculatePointAlongArc, METH_O),
        DECLARE_METHOD(t_LoxodromeArc, getDistance, METH_NOARGS),
        DECLARE_METHOD(t_LoxodromeArc, getFinalPoint, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoxodromeArc)[] = {
        { Py_tp_methods, t_LoxodromeArc__methods_ },
        { Py_tp_init, (void *) t_LoxodromeArc_init_ },
        { Py_tp_getset, t_LoxodromeArc__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoxodromeArc)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Loxodrome),
        NULL
      };

      DEFINE_TYPE(LoxodromeArc, t_LoxodromeArc, LoxodromeArc);

      void t_LoxodromeArc::install(PyObject *module)
      {
        installType(&PY_TYPE(LoxodromeArc), &PY_TYPE_DEF(LoxodromeArc), module, "LoxodromeArc", 0);
      }

      void t_LoxodromeArc::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "class_", make_descriptor(LoxodromeArc::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "wrapfn_", make_descriptor(t_LoxodromeArc::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoxodromeArc::initializeClass, 1)))
          return NULL;
        return t_LoxodromeArc::wrap_Object(LoxodromeArc(((t_LoxodromeArc *) arg)->object.this$));
      }
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoxodromeArc::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2, a3));
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

      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.calculatePointAlongArc(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "calculatePointAlongArc", arg);
        return NULL;
      }

      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDistance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDistance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBDGIMMessage::class$ = NULL;
          jmethodID *IonosphereBDGIMMessage::mids$ = NULL;
          bool IonosphereBDGIMMessage::live$ = false;

          jclass IonosphereBDGIMMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBDGIMMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_a53a7513ecedada2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_setAlphaI_89aad365fb0ed8da] = env->getMethodID(cls, "setAlphaI", "(ID)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBDGIMMessage::IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereBDGIMMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_a53a7513ecedada2]));
          }

          void IonosphereBDGIMMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_89aad365fb0ed8da], a0, a1);
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self);
          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args);
          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data);
          static PyGetSetDef t_IonosphereBDGIMMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereBDGIMMessage, alpha),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBDGIMMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBDGIMMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, setAlphaI, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBDGIMMessage)[] = {
            { Py_tp_methods, t_IonosphereBDGIMMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBDGIMMessage_init_ },
            { Py_tp_getset, t_IonosphereBDGIMMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBDGIMMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBDGIMMessage, t_IonosphereBDGIMMessage, IonosphereBDGIMMessage);

          void t_IonosphereBDGIMMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBDGIMMessage), &PY_TYPE_DEF(IonosphereBDGIMMessage), module, "IonosphereBDGIMMessage", 0);
          }

          void t_IonosphereBDGIMMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "class_", make_descriptor(IonosphereBDGIMMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "wrapfn_", make_descriptor(t_IonosphereBDGIMMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBDGIMMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBDGIMMessage::wrap_Object(IonosphereBDGIMMessage(((t_IonosphereBDGIMMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBDGIMMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBDGIMMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBDGIMMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TwoBodiesBaryFrame::class$ = NULL;
      jmethodID *TwoBodiesBaryFrame::mids$ = NULL;
      bool TwoBodiesBaryFrame::live$ = false;

      jclass TwoBodiesBaryFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TwoBodiesBaryFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a72c2af019e2130] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TwoBodiesBaryFrame::TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9a72c2af019e2130, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_TwoBodiesBaryFrame__methods_[] = {
        DECLARE_METHOD(t_TwoBodiesBaryFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TwoBodiesBaryFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TwoBodiesBaryFrame)[] = {
        { Py_tp_methods, t_TwoBodiesBaryFrame__methods_ },
        { Py_tp_init, (void *) t_TwoBodiesBaryFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TwoBodiesBaryFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TwoBodiesBaryFrame, t_TwoBodiesBaryFrame, TwoBodiesBaryFrame);

      void t_TwoBodiesBaryFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TwoBodiesBaryFrame), &PY_TYPE_DEF(TwoBodiesBaryFrame), module, "TwoBodiesBaryFrame", 0);
      }

      void t_TwoBodiesBaryFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "class_", make_descriptor(TwoBodiesBaryFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "wrapfn_", make_descriptor(t_TwoBodiesBaryFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TwoBodiesBaryFrame::initializeClass, 1)))
          return NULL;
        return t_TwoBodiesBaryFrame::wrap_Object(TwoBodiesBaryFrame(((t_TwoBodiesBaryFrame *) arg)->object.this$));
      }
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TwoBodiesBaryFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        TwoBodiesBaryFrame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TwoBodiesBaryFrame(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Header::class$ = NULL;
          jmethodID *Header::mids$ = NULL;
          bool Header::live$ = false;

          jclass Header::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Header");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_getClassification_3cffd47377eca18a] = env->getMethodID(cls, "getClassification", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getFormatVersion_557b8123390d8d0c] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getMessageId_3cffd47377eca18a] = env->getMethodID(cls, "getMessageId", "()Ljava/lang/String;");
              mids$[mid_getOriginator_3cffd47377eca18a] = env->getMethodID(cls, "getOriginator", "()Ljava/lang/String;");
              mids$[mid_setClassification_f5ffdf29129ef90a] = env->getMethodID(cls, "setClassification", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_20affcbd28542333] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setFormatVersion_10f281d777284cea] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setMessageId_f5ffdf29129ef90a] = env->getMethodID(cls, "setMessageId", "(Ljava/lang/String;)V");
              mids$[mid_setOriginator_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginator", "(Ljava/lang/String;)V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Header::Header(jdouble a0, jdouble a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

          ::java::lang::String Header::getClassification() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassification_3cffd47377eca18a]));
          }

          ::org::orekit::time::AbsoluteDate Header::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_7a97f7e149e79afb]));
          }

          jdouble Header::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_557b8123390d8d0c]);
          }

          ::java::lang::String Header::getMessageId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageId_3cffd47377eca18a]));
          }

          ::java::lang::String Header::getOriginator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginator_3cffd47377eca18a]));
          }

          void Header::setClassification(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClassification_f5ffdf29129ef90a], a0.this$);
          }

          void Header::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_20affcbd28542333], a0.this$);
          }

          void Header::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_10f281d777284cea], a0);
          }

          void Header::setMessageId(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMessageId_f5ffdf29129ef90a], a0.this$);
          }

          void Header::setOriginator(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginator_f5ffdf29129ef90a], a0.this$);
          }

          void Header::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Header_getClassification(t_Header *self);
          static PyObject *t_Header_getCreationDate(t_Header *self);
          static PyObject *t_Header_getFormatVersion(t_Header *self);
          static PyObject *t_Header_getMessageId(t_Header *self);
          static PyObject *t_Header_getOriginator(t_Header *self);
          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg);
          static PyObject *t_Header_validate(t_Header *self, PyObject *args);
          static PyObject *t_Header_get__classification(t_Header *self, void *data);
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__creationDate(t_Header *self, void *data);
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data);
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__messageId(t_Header *self, void *data);
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__originator(t_Header *self, void *data);
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data);
          static PyGetSetDef t_Header__fields_[] = {
            DECLARE_GETSET_FIELD(t_Header, classification),
            DECLARE_GETSET_FIELD(t_Header, creationDate),
            DECLARE_GETSET_FIELD(t_Header, formatVersion),
            DECLARE_GETSET_FIELD(t_Header, messageId),
            DECLARE_GETSET_FIELD(t_Header, originator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Header__methods_[] = {
            DECLARE_METHOD(t_Header, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_Header, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_Header, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_Header, getMessageId, METH_NOARGS),
            DECLARE_METHOD(t_Header, getOriginator, METH_NOARGS),
            DECLARE_METHOD(t_Header, setClassification, METH_O),
            DECLARE_METHOD(t_Header, setCreationDate, METH_O),
            DECLARE_METHOD(t_Header, setFormatVersion, METH_O),
            DECLARE_METHOD(t_Header, setMessageId, METH_O),
            DECLARE_METHOD(t_Header, setOriginator, METH_O),
            DECLARE_METHOD(t_Header, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Header)[] = {
            { Py_tp_methods, t_Header__methods_ },
            { Py_tp_init, (void *) t_Header_init_ },
            { Py_tp_getset, t_Header__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Header)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Header, t_Header, Header);

          void t_Header::install(PyObject *module)
          {
            installType(&PY_TYPE(Header), &PY_TYPE_DEF(Header), module, "Header", 0);
          }

          void t_Header::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "class_", make_descriptor(Header::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "wrapfn_", make_descriptor(t_Header::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Header::initializeClass, 1)))
              return NULL;
            return t_Header::wrap_Object(Header(((t_Header *) arg)->object.this$));
          }
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Header::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Header object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Header(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Header_getClassification(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClassification());
            return j2p(result);
          }

          static PyObject *t_Header_getCreationDate(t_Header *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_Header_getFormatVersion(t_Header *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Header_getMessageId(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessageId());
            return j2p(result);
          }

          static PyObject *t_Header_getOriginator(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOriginator());
            return j2p(result);
          }

          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setClassification(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClassification", arg);
            return NULL;
          }

          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMessageId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMessageId", arg);
            return NULL;
          }

          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setOriginator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginator", arg);
            return NULL;
          }

          static PyObject *t_Header_validate(t_Header *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Header), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Header_get__classification(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClassification());
            return j2p(value);
          }
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setClassification(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "classification", arg);
            return -1;
          }

          static PyObject *t_Header_get__creationDate(t_Header *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_Header_get__messageId(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMessageId());
            return j2p(value);
          }
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMessageId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "messageId", arg);
            return -1;
          }

          static PyObject *t_Header_get__originator(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOriginator());
            return j2p(value);
          }
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setOriginator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrDataField::class$ = NULL;
          jmethodID *IgsSsrDataField::mids$ = NULL;
          bool IgsSsrDataField::live$ = false;
          IgsSsrDataField *IgsSsrDataField::IDF001 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF002 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF003 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF004 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF005 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF006 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF007 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF008 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF009 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF010 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF011 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF012 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF013 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF014 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF015 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF016 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF017 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF018 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF019 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF020 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF021 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF022 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF023 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF024 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF025 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF026 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF027 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF028 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF029 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF030 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF031 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF032 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF033 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF034 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF035 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF036 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF037 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF038 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF039 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF040 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF041 = NULL;

          jclass IgsSsrDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_29191d171c2347fd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");
              mids$[mid_values_b0269f4adcb9f36b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDF001 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF001", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF002 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF002", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF003 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF003", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF004 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF004", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF005 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF005", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF006 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF006", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF007 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF007", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF008 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF008", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF009 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF009", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF010 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF010", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF011 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF011", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF012 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF012", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF013 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF013", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF014 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF014", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF015 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF015", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF016 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF016", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF017 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF017", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF018 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF018", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF019 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF019", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF020 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF020", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF021 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF021", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF022 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF022", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF023 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF023", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF024 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF024", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF025 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF025", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF026 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF026", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF027 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF027", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF028 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF028", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF029 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF029", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF030 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF030", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF031 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF031", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF032 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF032", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF033 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF033", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF034 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF034", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF035 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF035", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF036 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF036", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF037 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF037", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF038 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF038", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF039 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF039", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF040 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF040", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF041 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF041", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrDataField IgsSsrDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_29191d171c2347fd], a0.this$));
          }

          JArray< IgsSsrDataField > IgsSsrDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_b0269f4adcb9f36b]));
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
        namespace parser {
          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args);
          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type);
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data);
          static PyGetSetDef t_IgsSsrDataField__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrDataField__methods_[] = {
            DECLARE_METHOD(t_IgsSsrDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrDataField)[] = {
            { Py_tp_methods, t_IgsSsrDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrDataField, t_IgsSsrDataField, IgsSsrDataField);
          PyObject *t_IgsSsrDataField::wrap_Object(const IgsSsrDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrDataField), &PY_TYPE_DEF(IgsSsrDataField), module, "IgsSsrDataField", 0);
          }

          void t_IgsSsrDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "class_", make_descriptor(IgsSsrDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "wrapfn_", make_descriptor(t_IgsSsrDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF001", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF002", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF003", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF004", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF004)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF005", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF006", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF007", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF008", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF009", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF010", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF010)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF011", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF011)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF012", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF012)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF013", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF013)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF014", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF015", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF015)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF016", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF016)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF017", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF017)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF018", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF018)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF019", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF020", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF021", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF021)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF022", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF022)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF023", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF023)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF024", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF024)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF025", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF025)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF026", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF026)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF027", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF027)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF028", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF028)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF029", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF029)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF030", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF030)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF031", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF031)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF032", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF032)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF033", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF033)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF034", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF034)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF035", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF035)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF036", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF036)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF037", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF037)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF038", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF039", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF039)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF040", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF041", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF041)));
          }

          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrDataField::initializeClass, 1)))
              return NULL;
            return t_IgsSsrDataField::wrap_Object(IgsSsrDataField(((t_IgsSsrDataField *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::valueOf(a0));
              return t_IgsSsrDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type)
          {
            JArray< IgsSsrDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrDataField::wrap_jobject);
          }
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data)
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagatorBuilder::class$ = NULL;
        jmethodID *GLONASSNumericalPropagatorBuilder::mids$ = NULL;
        bool GLONASSNumericalPropagatorBuilder::live$ = false;

        jclass GLONASSNumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4f5084529b2630a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Z)V");
            mids$[mid_init$_fe060e7d2340011c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_attitudeProvider_b8e20793d178ef3e] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_build_66895542a8da4316] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
            mids$[mid_eci_d85d69f2cf281f4c] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_mass_1e4b091bb86c38aa] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4f5084529b2630a, a0.this$, a1.this$, a2)) {}

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe060e7d2340011c, a0.this$, a1.this$, a2, a3.this$)) {}

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_b8e20793d178ef3e], a0.this$));
        }

        ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNumericalPropagatorBuilder::build() const
        {
          return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_build_66895542a8da4316]));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_d85d69f2cf281f4c], a0.this$));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::mass(jdouble a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_1e4b091bb86c38aa], a0));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);

        static PyMethodDef t_GLONASSNumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, attitudeProvider, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, eci, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, mass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagatorBuilder, t_GLONASSNumericalPropagatorBuilder, GLONASSNumericalPropagatorBuilder);

        void t_GLONASSNumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagatorBuilder), &PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder), module, "GLONASSNumericalPropagatorBuilder", 0);
        }

        void t_GLONASSNumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "class_", make_descriptor(GLONASSNumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagatorBuilder::wrap_Object(GLONASSNumericalPropagatorBuilder(((t_GLONASSNumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.attitudeProvider(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.eci(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eci", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.mass(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenThirdBodyLinear::class$ = NULL;
              jmethodID *HansenThirdBodyLinear::mids$ = NULL;
              bool HansenThirdBodyLinear::live$ = false;

              jclass HansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_87096e3fd8086100] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_77f9e227e4cf04b4] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_77f9e227e4cf04b4] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenThirdBodyLinear::HansenThirdBodyLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

              void HansenThirdBodyLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_87096e3fd8086100], a0, a1, a2);
              }

              jdouble HansenThirdBodyLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_77f9e227e4cf04b4], a0, a1);
              }

              jdouble HansenThirdBodyLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_77f9e227e4cf04b4], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args);

              static PyMethodDef t_HansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_HansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_HansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_HansenThirdBodyLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenThirdBodyLinear, t_HansenThirdBodyLinear, HansenThirdBodyLinear);

              void t_HansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenThirdBodyLinear), &PY_TYPE_DEF(HansenThirdBodyLinear), module, "HansenThirdBodyLinear", 0);
              }

              void t_HansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "class_", make_descriptor(HansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "wrapfn_", make_descriptor(t_HansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenThirdBodyLinear::wrap_Object(HansenThirdBodyLinear(((t_HansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenThirdBodyLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondOrderODE::class$ = NULL;
      jmethodID *SecondOrderODE::mids$ = NULL;
      bool SecondOrderODE::live$ = false;

      jclass SecondOrderODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondOrderODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeSecondDerivatives_502d815405f957d1] = env->getMethodID(cls, "computeSecondDerivatives", "(D[D[D)[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondOrderODE::computeSecondDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeSecondDerivatives_502d815405f957d1], a0, a1.this$, a2.this$));
      }

      jint SecondOrderODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
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
      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args);
      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self);
      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data);
      static PyGetSetDef t_SecondOrderODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondOrderODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondOrderODE__methods_[] = {
        DECLARE_METHOD(t_SecondOrderODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, computeSecondDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondOrderODE, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondOrderODE)[] = {
        { Py_tp_methods, t_SecondOrderODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondOrderODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondOrderODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondOrderODE, t_SecondOrderODE, SecondOrderODE);

      void t_SecondOrderODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondOrderODE), &PY_TYPE_DEF(SecondOrderODE), module, "SecondOrderODE", 0);
      }

      void t_SecondOrderODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "class_", make_descriptor(SecondOrderODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "wrapfn_", make_descriptor(t_SecondOrderODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondOrderODE::initializeClass, 1)))
          return NULL;
        return t_SecondOrderODE::wrap_Object(SecondOrderODE(((t_SecondOrderODE *) arg)->object.this$));
      }
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondOrderODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeSecondDerivatives(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeSecondDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *AbstractCovarianceMatrixProvider::mids$ = NULL;
        bool AbstractCovarianceMatrixProvider::live$ = false;

        jclass AbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix AbstractCovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_fc9cdfa83c55d6b2], a0.this$));
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
      namespace sequential {
        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg);

        static PyMethodDef t_AbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_AbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractCovarianceMatrixProvider, t_AbstractCovarianceMatrixProvider, AbstractCovarianceMatrixProvider);

        void t_AbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractCovarianceMatrixProvider), &PY_TYPE_DEF(AbstractCovarianceMatrixProvider), module, "AbstractCovarianceMatrixProvider", 0);
        }

        void t_AbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "class_", make_descriptor(AbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_AbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractCovarianceMatrixProvider::wrap_Object(AbstractCovarianceMatrixProvider(((t_AbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter2DPOCMethod::PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

              void PythonAbstractShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
              }

              jlong PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
              }

              void PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter2DPOCMethod, t_PythonAbstractShortTermEncounter2DPOCMethod, PythonAbstractShortTermEncounter2DPOCMethod);

              void t_PythonAbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter2DPOCMethod), module, "PythonAbstractShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter2DPOCMethod(((t_PythonAbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractShortTermEncounter2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter2DPOCMethod(a0));
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

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSOrbitalElements::class$ = NULL;
            jmethodID *GNSSOrbitalElements::mids$ = NULL;
            bool GNSSOrbitalElements::live$ = false;

            jclass GNSSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAngularVelocity_557b8123390d8d0c] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCic_557b8123390d8d0c] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_557b8123390d8d0c] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_557b8123390d8d0c] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_557b8123390d8d0c] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_557b8123390d8d0c] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_557b8123390d8d0c] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getCycleDuration_557b8123390d8d0c] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_557b8123390d8d0c] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getM0_557b8123390d8d0c] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_557b8123390d8d0c] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_557b8123390d8d0c] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_2d63e0224266d4a7] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_fd9ba085897912c9] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_8c43a154c6c41be9] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getSma_557b8123390d8d0c] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_412668abc8d889e9] = env->getMethodID(cls, "getWeek", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSOrbitalElements::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_557b8123390d8d0c]);
            }

            jint GNSSOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
            }

            jdouble GNSSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2d63e0224266d4a7]));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fd9ba085897912c9], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_8c43a154c6c41be9], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GNSSOrbitalElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_557b8123390d8d0c]);
            }

            jdouble GNSSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jint GNSSOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_412668abc8d889e9]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args);
            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data);
            static PyGetSetDef t_GNSSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, angularVelocity),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cic),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cis),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crs),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cuc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cus),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, i0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, iDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, m0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, meanMotion),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, mu),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omega0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omegaDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, propagator),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, sma),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GNSSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCic, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCis, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCus, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getI0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getM0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getWeek, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSOrbitalElements)[] = {
              { Py_tp_methods, t_GNSSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSOrbitalElements, t_GNSSOrbitalElements, GNSSOrbitalElements);

            void t_GNSSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSOrbitalElements), &PY_TYPE_DEF(GNSSOrbitalElements), module, "GNSSOrbitalElements", 0);
            }

            void t_GNSSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "class_", make_descriptor(GNSSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "wrapfn_", make_descriptor(t_GNSSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GNSSOrbitalElements::wrap_Object(GNSSOrbitalElements(((t_GNSSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(value);
            }

            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageVersionXmlTokenBuilder::class$ = NULL;
            jmethodID *MessageVersionXmlTokenBuilder::mids$ = NULL;
            bool MessageVersionXmlTokenBuilder::live$ = false;

            jclass MessageVersionXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MessageVersionXmlTokenBuilder::MessageVersionXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::java::util::List MessageVersionXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_5a8e94497b45a4c0], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_MessageVersionXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageVersionXmlTokenBuilder)[] = {
              { Py_tp_methods, t_MessageVersionXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_MessageVersionXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageVersionXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageVersionXmlTokenBuilder, t_MessageVersionXmlTokenBuilder, MessageVersionXmlTokenBuilder);

            void t_MessageVersionXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageVersionXmlTokenBuilder), &PY_TYPE_DEF(MessageVersionXmlTokenBuilder), module, "MessageVersionXmlTokenBuilder", 0);
            }

            void t_MessageVersionXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "class_", make_descriptor(MessageVersionXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "wrapfn_", make_descriptor(t_MessageVersionXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_MessageVersionXmlTokenBuilder::wrap_Object(MessageVersionXmlTokenBuilder(((t_MessageVersionXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              MessageVersionXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = MessageVersionXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *ZipfDistribution::class$ = NULL;
        jmethodID *ZipfDistribution::mids$ = NULL;
        bool ZipfDistribution::live$ = false;

        jclass ZipfDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/ZipfDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getExponent_557b8123390d8d0c] = env->getMethodID(cls, "getExponent", "()D");
            mids$[mid_getNumberOfElements_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfElements", "()I");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_calculateNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "calculateNumericalMean", "()D");
            mids$[mid_calculateNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "calculateNumericalVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ZipfDistribution::ZipfDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

        jdouble ZipfDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jdouble ZipfDistribution::getExponent() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getExponent_557b8123390d8d0c]);
        }

        jint ZipfDistribution::getNumberOfElements() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfElements_412668abc8d889e9]);
        }

        jdouble ZipfDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble ZipfDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jint ZipfDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint ZipfDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean ZipfDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble ZipfDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble ZipfDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data);
        static PyGetSetDef t_ZipfDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ZipfDistribution, exponent),
          DECLARE_GET_FIELD(t_ZipfDistribution, numberOfElements),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ZipfDistribution__methods_[] = {
          DECLARE_METHOD(t_ZipfDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumberOfElements, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ZipfDistribution)[] = {
          { Py_tp_methods, t_ZipfDistribution__methods_ },
          { Py_tp_init, (void *) t_ZipfDistribution_init_ },
          { Py_tp_getset, t_ZipfDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ZipfDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(ZipfDistribution, t_ZipfDistribution, ZipfDistribution);

        void t_ZipfDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ZipfDistribution), &PY_TYPE_DEF(ZipfDistribution), module, "ZipfDistribution", 0);
        }

        void t_ZipfDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "class_", make_descriptor(ZipfDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "wrapfn_", make_descriptor(t_ZipfDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ZipfDistribution::initializeClass, 1)))
            return NULL;
          return t_ZipfDistribution::wrap_Object(ZipfDistribution(((t_ZipfDistribution *) arg)->object.this$));
        }
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ZipfDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          ZipfDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = ZipfDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getExponent());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfElements());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getExponent());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfElements());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolatingFunction::class$ = NULL;
        jmethodID *BicubicInterpolatingFunction::mids$ = NULL;
        bool BicubicInterpolatingFunction::live$ = false;

        jclass BicubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_19c569ee064d5b49] = env->getMethodID(cls, "<init>", "([D[D[[D[[D[[D[[D)V");
            mids$[mid_isValidPoint_41fce65646328eb2] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolatingFunction::BicubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19c569ee064d5b49, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jboolean BicubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_41fce65646328eb2], a0, a1);
        }

        jdouble BicubicInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      namespace interpolation {
        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_BicubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolatingFunction, t_BicubicInterpolatingFunction, BicubicInterpolatingFunction);

        void t_BicubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolatingFunction), &PY_TYPE_DEF(BicubicInterpolatingFunction), module, "BicubicInterpolatingFunction", 0);
        }

        void t_BicubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "class_", make_descriptor(BicubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "wrapfn_", make_descriptor(t_BicubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolatingFunction::wrap_Object(BicubicInterpolatingFunction(((t_BicubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          JArray< JArray< jdouble > > a4((jobject) NULL);
          JArray< JArray< jdouble > > a5((jobject) NULL);
          BicubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D[[D[[D[[D", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = BicubicInterpolatingFunction(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovarianceKey::class$ = NULL;
            jmethodID *XYZCovarianceKey::mids$ = NULL;
            bool XYZCovarianceKey::live$ = false;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::COMMENT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_THR = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CX_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Z = NULL;

            jclass XYZCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_afff6bd2ad22bfe3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;)Z");
                mids$[mid_valueOf_65059a2eee4f2a20] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");
                mids$[mid_values_a7ba73299736a933] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                COMMENT = new XYZCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_THR = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CX_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XYZCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_afff6bd2ad22bfe3], a0.this$, a1.this$, a2.this$);
            }

            XYZCovarianceKey XYZCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XYZCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_65059a2eee4f2a20], a0.this$));
            }

            JArray< XYZCovarianceKey > XYZCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XYZCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a7ba73299736a933]));
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
            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data);
            static PyGetSetDef t_XYZCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_XYZCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_XYZCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovarianceKey)[] = {
              { Py_tp_methods, t_XYZCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XYZCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XYZCovarianceKey, t_XYZCovarianceKey, XYZCovarianceKey);
            PyObject *t_XYZCovarianceKey::wrap_Object(const XYZCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XYZCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XYZCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovarianceKey), &PY_TYPE_DEF(XYZCovarianceKey), module, "XYZCovarianceKey", 0);
            }

            void t_XYZCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "class_", make_descriptor(XYZCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "wrapfn_", make_descriptor(t_XYZCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XYZCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "COMMENT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_THR", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CX_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Z)));
            }

            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_XYZCovarianceKey::wrap_Object(XYZCovarianceKey(((t_XYZCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XYZCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::valueOf(a0));
                return t_XYZCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type)
            {
              JArray< XYZCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_XYZCovarianceKey::wrap_jobject);
            }
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data)
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
#include "org/orekit/utils/PythonStateFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateFunction::class$ = NULL;
      jmethodID *PythonStateFunction::mids$ = NULL;
      bool PythonStateFunction::live$ = false;

      jclass PythonStateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_2a145999b8c9a41d] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateFunction::PythonStateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonStateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonStateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonStateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self);
      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args);
      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data);
      static PyGetSetDef t_PythonStateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonStateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateFunction)[] = {
        { Py_tp_methods, t_PythonStateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonStateFunction_init_ },
        { Py_tp_getset, t_PythonStateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateFunction, t_PythonStateFunction, PythonStateFunction);

      void t_PythonStateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateFunction), &PY_TYPE_DEF(PythonStateFunction), module, "PythonStateFunction", 1);
      }

      void t_PythonStateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "class_", make_descriptor(PythonStateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "wrapfn_", make_descriptor(t_PythonStateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonStateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonStateFunction::wrap_Object(PythonStateFunction(((t_PythonStateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonStateFunction object((jobject) NULL);

        INT_CALL(object = PythonStateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1bab0430894827a0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Segment;)V");
              mids$[mid_init$_08c86faf9fec8eaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_init$_b2fa07e96193ae69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_0b14c58c51fe99fb] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/SubLine;Z)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment & a0) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_1bab0430894827a0, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_08c86faf9fec8eaa, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_b2fa07e96193ae69, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_0b14c58c51fe99fb], a0.this$, a1));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLine::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            DECLARE_GET_FIELD(t_SubLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);
          PyObject *t_SubLine::wrap_Object(const SubLine& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLine::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::twod::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "KZ", SubLine::initializeClass, &a0, &p0, t_SubLine::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            return callSuper(PY_TYPE(SubLine), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmData::class$ = NULL;
              jmethodID *AcmData::mids$ = NULL;
              bool AcmData::live$ = false;

              jclass AcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1724940ac42f3f73] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getAttitudeBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getAttitudeBlocks", "()Ljava/util/List;");
                  mids$[mid_getAttitudeDeterminationBlock_d40e46e33d1586b5] = env->getMethodID(cls, "getAttitudeDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;");
                  mids$[mid_getCovarianceBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getPhysicBlock_1419754bb1060497] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;");
                  mids$[mid_getUserDefinedBlock_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmData::AcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1724940ac42f3f73, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              ::java::util::List AcmData::getAttitudeBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeBlocks_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination AcmData::getAttitudeDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination(env->callObjectMethod(this$, mids$[mid_getAttitudeDeterminationBlock_d40e46e33d1586b5]));
              }

              ::java::util::List AcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_0d9551367f7ecdef]));
              }

              ::java::util::List AcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties AcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_1419754bb1060497]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined AcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_e8dd2483e310f990]));
              }

              void AcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self);
              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self);
              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self);
              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg);
              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data);
              static PyGetSetDef t_AcmData__fields_[] = {
                DECLARE_GET_FIELD(t_AcmData, attitudeBlocks),
                DECLARE_GET_FIELD(t_AcmData, attitudeDeterminationBlock),
                DECLARE_GET_FIELD(t_AcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_AcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_AcmData, physicBlock),
                DECLARE_GET_FIELD(t_AcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmData__methods_[] = {
                DECLARE_METHOD(t_AcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, getAttitudeBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getAttitudeDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmData)[] = {
                { Py_tp_methods, t_AcmData__methods_ },
                { Py_tp_init, (void *) t_AcmData_init_ },
                { Py_tp_getset, t_AcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmData, t_AcmData, AcmData);

              void t_AcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmData), &PY_TYPE_DEF(AcmData), module, "AcmData", 0);
              }

              void t_AcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "class_", make_descriptor(AcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "wrapfn_", make_descriptor(t_AcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmData::initializeClass, 1)))
                  return NULL;
                return t_AcmData::wrap_Object(AcmData(((t_AcmData *) arg)->object.this$));
              }
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                AcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5))
                {
                  INT_CALL(object = AcmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(result);
              }

              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovarianceHistory));
              }

              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeManeuver));
              }

              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonItrfVersionProvider::class$ = NULL;
      jmethodID *PythonItrfVersionProvider::mids$ = NULL;
      bool PythonItrfVersionProvider::live$ = false;

      jclass PythonItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getConfiguration_a005f84471bdab98] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonItrfVersionProvider::PythonItrfVersionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonItrfVersionProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonItrfVersionProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonItrfVersionProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self);
      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args);
      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data);
      static PyGetSetDef t_PythonItrfVersionProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonItrfVersionProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_PythonItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonItrfVersionProvider)[] = {
        { Py_tp_methods, t_PythonItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) t_PythonItrfVersionProvider_init_ },
        { Py_tp_getset, t_PythonItrfVersionProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonItrfVersionProvider, t_PythonItrfVersionProvider, PythonItrfVersionProvider);

      void t_PythonItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonItrfVersionProvider), &PY_TYPE_DEF(PythonItrfVersionProvider), module, "PythonItrfVersionProvider", 1);
      }

      void t_PythonItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "class_", make_descriptor(PythonItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "wrapfn_", make_descriptor(t_PythonItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonItrfVersionProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;", (void *) t_PythonItrfVersionProvider_getConfiguration0 },
          { "pythonDecRef", "()V", (void *) t_PythonItrfVersionProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_PythonItrfVersionProvider::wrap_Object(PythonItrfVersionProvider(((t_PythonItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonItrfVersionProvider object((jobject) NULL);

        INT_CALL(object = PythonItrfVersionProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getConfiguration", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, &value))
        {
          throwTypeError("getConfiguration", result);
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

      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *EphemerisOcmWriter::class$ = NULL;
              jmethodID *EphemerisOcmWriter::mids$ = NULL;
              bool EphemerisOcmWriter::live$ = false;

              jclass EphemerisOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0561a19387a0a30f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_0fa910eb9c2e844e] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOcmWriter::EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a3, const ::org::orekit::files::ccsds::utils::FileFormat & a4, const ::java::lang::String & a5, jdouble a6, jint a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0561a19387a0a30f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7)) {}

              void EphemerisOcmWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_0fa910eb9c2e844e], a0.this$, a1.this$);
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
          namespace odm {
            namespace ocm {
              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOcmWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOcmWriter)[] = {
                { Py_tp_methods, t_EphemerisOcmWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOcmWriter, t_EphemerisOcmWriter, EphemerisOcmWriter);

              void t_EphemerisOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOcmWriter), &PY_TYPE_DEF(EphemerisOcmWriter), module, "EphemerisOcmWriter", 0);
              }

              void t_EphemerisOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "class_", make_descriptor(EphemerisOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "wrapfn_", make_descriptor(t_EphemerisOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOcmWriter::wrap_Object(EphemerisOcmWriter(((t_EphemerisOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a3((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a4((jobject) NULL);
                PyTypeObject **p4;
                ::java::lang::String a5((jobject) NULL);
                jdouble a6;
                jint a7;
                EphemerisOcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkkKsDI", ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a5, &a6, &a7))
                {
                  INT_CALL(object = EphemerisOcmWriter(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
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
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleBased::class$ = NULL;
      jmethodID *PositionAngleBased::mids$ = NULL;
      bool PositionAngleBased::live$ = false;

      jclass PositionAngleBased::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleBased");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_670bb8d961de5e47] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/PositionAngleBased;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::PositionAngleType PositionAngleBased::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      jboolean PositionAngleBased::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      PositionAngleBased PositionAngleBased::removeRates() const
      {
        return PositionAngleBased(env->callObjectMethod(this$, mids$[mid_removeRates_670bb8d961de5e47]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data);
      static PyGetSetDef t_PositionAngleBased__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleBased, cachedPositionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleBased__methods_[] = {
        DECLARE_METHOD(t_PositionAngleBased, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, removeRates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleBased)[] = {
        { Py_tp_methods, t_PositionAngleBased__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleBased__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleBased)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PositionAngleBased, t_PositionAngleBased, PositionAngleBased);

      void t_PositionAngleBased::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleBased), &PY_TYPE_DEF(PositionAngleBased), module, "PositionAngleBased", 0);
      }

      void t_PositionAngleBased::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "class_", make_descriptor(PositionAngleBased::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "wrapfn_", make_descriptor(t_PositionAngleBased::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleBased::initializeClass, 1)))
          return NULL;
        return t_PositionAngleBased::wrap_Object(PositionAngleBased(((t_PositionAngleBased *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleBased::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self)
      {
        PositionAngleBased result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_PositionAngleBased::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouIGSO::class$ = NULL;
        jmethodID *BeidouIGSO::mids$ = NULL;
        bool BeidouIGSO::live$ = false;

        jclass BeidouIGSO::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouIGSO");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9803b569bb20b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouIGSO::BeidouIGSO(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::BeidouMeo(env->newObject(initializeClass, &mids$, mid_init$_c9803b569bb20b21, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouIGSO__methods_[] = {
          DECLARE_METHOD(t_BeidouIGSO, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouIGSO, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouIGSO)[] = {
          { Py_tp_methods, t_BeidouIGSO__methods_ },
          { Py_tp_init, (void *) t_BeidouIGSO_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouIGSO)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::BeidouMeo),
          NULL
        };

        DEFINE_TYPE(BeidouIGSO, t_BeidouIGSO, BeidouIGSO);

        void t_BeidouIGSO::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouIGSO), &PY_TYPE_DEF(BeidouIGSO), module, "BeidouIGSO", 0);
        }

        void t_BeidouIGSO::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "class_", make_descriptor(BeidouIGSO::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "wrapfn_", make_descriptor(t_BeidouIGSO::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouIGSO::initializeClass, 1)))
            return NULL;
          return t_BeidouIGSO::wrap_Object(BeidouIGSO(((t_BeidouIGSO *) arg)->object.this$));
        }
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouIGSO::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouIGSO object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouIGSO(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolverUtils::class$ = NULL;
        jmethodID *UnivariateSolverUtils::mids$ = NULL;
        bool UnivariateSolverUtils::live$ = false;

        jclass UnivariateSolverUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolverUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_bracket_1ce1584b4c4d1aa0] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)[D");
            mids$[mid_bracket_2da5bc955995af72] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_5d2b1d16d63bbb70] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_c858898bfc3913a1] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDI)[D");
            mids$[mid_bracket_e007deb4884f124c] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDDDI)[D");
            mids$[mid_bracket_93c2be7897d91e00] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_forceSide_74679e43d1154a2a] = env->getStaticMethodID(cls, "forceSide", "(ILorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_isBracketing_d4e7a619be4735dd] = env->getStaticMethodID(cls, "isBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)Z");
            mids$[mid_isSequence_3d7c70c33c048085] = env->getStaticMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_midpoint_2268d18be49a6087] = env->getStaticMethodID(cls, "midpoint", "(DD)D");
            mids$[mid_solve_588f35b6905f1239] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_9d0d6e0b2f32c6e6] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_verifyBracketing_ac068e084ec85d06] = env->getStaticMethodID(cls, "verifyBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)V");
            mids$[mid_verifyInterval_ab23f4ae0fb33968] = env->getStaticMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_87096e3fd8086100] = env->getStaticMethodID(cls, "verifySequence", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_1ce1584b4c4d1aa0], a0.this$, a1, a2, a3));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_2da5bc955995af72], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_5d2b1d16d63bbb70], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_c858898bfc3913a1], a0.this$, a1, a2, a3, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_e007deb4884f124c], a0.this$, a1, a2, a3, a4, a5, a6));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_93c2be7897d91e00], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
        }

        jdouble UnivariateSolverUtils::forceSide(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::hipparchus::analysis::solvers::AllowedSolution & a6)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_forceSide_74679e43d1154a2a], a0, a1.this$, a2.this$, a3, a4, a5, a6.this$);
        }

        jboolean UnivariateSolverUtils::isBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isBracketing_d4e7a619be4735dd], a0.this$, a1, a2);
        }

        jboolean UnivariateSolverUtils::isSequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isSequence_3d7c70c33c048085], a0, a1, a2);
        }

        jdouble UnivariateSolverUtils::midpoint(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_midpoint_2268d18be49a6087], a0, a1);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_588f35b6905f1239], a0.this$, a1, a2);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_9d0d6e0b2f32c6e6], a0.this$, a1, a2, a3);
        }

        void UnivariateSolverUtils::verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyBracketing_ac068e084ec85d06], a0.this$, a1, a2);
        }

        void UnivariateSolverUtils::verifyInterval(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyInterval_ab23f4ae0fb33968], a0, a1);
        }

        void UnivariateSolverUtils::verifySequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifySequence_87096e3fd8086100], a0, a1, a2);
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
      namespace solvers {
        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_UnivariateSolverUtils__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolverUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, bracket, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, forceSide, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isSequence, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, midpoint, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, solve, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifySequence, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolverUtils)[] = {
          { Py_tp_methods, t_UnivariateSolverUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolverUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateSolverUtils, t_UnivariateSolverUtils, UnivariateSolverUtils);

        void t_UnivariateSolverUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolverUtils), &PY_TYPE_DEF(UnivariateSolverUtils), module, "UnivariateSolverUtils", 0);
        }

        void t_UnivariateSolverUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "class_", make_descriptor(UnivariateSolverUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "wrapfn_", make_descriptor(t_UnivariateSolverUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolverUtils::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolverUtils::wrap_Object(UnivariateSolverUtils(((t_UnivariateSolverUtils *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolverUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return result.wrap();
              }
            }
            break;
           case 5:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            break;
           case 7:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
              PyTypeObject **p5;
              jint a6;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jint a6;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError(type, "bracket", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::hipparchus::analysis::solvers::AllowedSolution a6((jobject) NULL);
          PyTypeObject **p6;
          jdouble result;

          if (!parseArgs(args, "IkKDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_, &a3, &a4, &a5, &a6, &p6, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::forceSide(a0, a1, a2, a3, a4, a5, a6));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "forceSide", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isBracketing(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isSequence(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isSequence", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::midpoint(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "midpoint", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "solve", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyBracketing(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyInterval(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyInterval", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifySequence(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifySequence", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfLogs::class$ = NULL;
          jmethodID *SumOfLogs::mids$ = NULL;
          bool SumOfLogs::live$ = false;

          jclass SumOfLogs::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfLogs");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_6a62c6cf36c34733] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_de0aed3ae7e20e71] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfLogs::SumOfLogs() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void SumOfLogs::aggregate(const SumOfLogs & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_6a62c6cf36c34733], a0.this$);
          }

          void SumOfLogs::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          SumOfLogs SumOfLogs::copy() const
          {
            return SumOfLogs(env->callObjectMethod(this$, mids$[mid_copy_de0aed3ae7e20e71]));
          }

          jdouble SumOfLogs::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong SumOfLogs::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble SumOfLogs::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void SumOfLogs::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg);
          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data);
          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data);
          static PyGetSetDef t_SumOfLogs__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfLogs, n),
            DECLARE_GET_FIELD(t_SumOfLogs, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfLogs__methods_[] = {
            DECLARE_METHOD(t_SumOfLogs, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfLogs, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfLogs)[] = {
            { Py_tp_methods, t_SumOfLogs__methods_ },
            { Py_tp_init, (void *) t_SumOfLogs_init_ },
            { Py_tp_getset, t_SumOfLogs__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfLogs)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfLogs, t_SumOfLogs, SumOfLogs);

          void t_SumOfLogs::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfLogs), &PY_TYPE_DEF(SumOfLogs), module, "SumOfLogs", 0);
          }

          void t_SumOfLogs::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "class_", make_descriptor(SumOfLogs::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "wrapfn_", make_descriptor(t_SumOfLogs::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfLogs::initializeClass, 1)))
              return NULL;
            return t_SumOfLogs::wrap_Object(SumOfLogs(((t_SumOfLogs *) arg)->object.this$));
          }
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfLogs::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds)
          {
            SumOfLogs object((jobject) NULL);

            INT_CALL(object = SumOfLogs());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg)
          {
            SumOfLogs a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfLogs::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args)
          {
            SumOfLogs result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfLogs::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/StepEndEventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *StepEndEventState::class$ = NULL;
        jmethodID *StepEndEventState::mids$ = NULL;
        bool StepEndEventState::live$ = false;

        jclass StepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/StepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b9694d2460b8c773] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
            mids$[mid_doEvent_6006b945607419cb] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_8380759ad65b5b06] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_557b8123390d8d0c] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_getHandler_df5b215978aa5f79] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEStepEndHandler;");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_setStepEnd_10f281d777284cea] = env->getMethodID(cls, "setStepEnd", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepEndEventState::StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9694d2460b8c773, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence StepEndEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_6006b945607419cb], a0.this$));
        }

        jboolean StepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_8380759ad65b5b06], a0.this$);
        }

        jdouble StepEndEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_557b8123390d8d0c]);
        }

        ::org::hipparchus::ode::events::ODEStepEndHandler StepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_df5b215978aa5f79]));
        }

        void StepEndEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }

        void StepEndEventState::setStepEnd(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_10f281d777284cea], a0);
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
      namespace events {
        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args);
        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data);
        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data);
        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data);
        static PyGetSetDef t_StepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_StepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_StepEndEventState, handler),
          DECLARE_SET_FIELD(t_StepEndEventState, stepEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepEndEventState__methods_[] = {
          DECLARE_METHOD(t_StepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_StepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_StepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_StepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepEndEventState)[] = {
          { Py_tp_methods, t_StepEndEventState__methods_ },
          { Py_tp_init, (void *) t_StepEndEventState_init_ },
          { Py_tp_getset, t_StepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepEndEventState, t_StepEndEventState, StepEndEventState);

        void t_StepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(StepEndEventState), &PY_TYPE_DEF(StepEndEventState), module, "StepEndEventState", 0);
        }

        void t_StepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "class_", make_descriptor(StepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "wrapfn_", make_descriptor(t_StepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepEndEventState::initializeClass, 1)))
            return NULL;
          return t_StepEndEventState::wrap_Object(StepEndEventState(((t_StepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);
          StepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
          {
            INT_CALL(object = StepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(result);
        }

        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(value);
        }

        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FiniteDifferencesDifferentiator::class$ = NULL;
        jmethodID *FiniteDifferencesDifferentiator::mids$ = NULL;
        bool FiniteDifferencesDifferentiator::live$ = false;

        jclass FiniteDifferencesDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_differentiate_8233aa57faace755] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
            mids$[mid_differentiate_6ca090d927b88e04] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");
            mids$[mid_differentiate_4cf1016d87eb18ab] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");
            mids$[mid_getNbPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbPoints", "()I");
            mids$[mid_getStepSize_557b8123390d8d0c] = env->getMethodID(cls, "getStepSize", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_8233aa57faace755], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_6ca090d927b88e04], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_4cf1016d87eb18ab], a0.this$));
        }

        jint FiniteDifferencesDifferentiator::getNbPoints() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPoints_412668abc8d889e9]);
        }

        jdouble FiniteDifferencesDifferentiator::getStepSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStepSize_557b8123390d8d0c]);
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
        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args);
        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyGetSetDef t_FiniteDifferencesDifferentiator__fields_[] = {
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, nbPoints),
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, stepSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FiniteDifferencesDifferentiator__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getNbPoints, METH_NOARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getStepSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencesDifferentiator)[] = {
          { Py_tp_methods, t_FiniteDifferencesDifferentiator__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencesDifferentiator_init_ },
          { Py_tp_getset, t_FiniteDifferencesDifferentiator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencesDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencesDifferentiator, t_FiniteDifferencesDifferentiator, FiniteDifferencesDifferentiator);

        void t_FiniteDifferencesDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencesDifferentiator), &PY_TYPE_DEF(FiniteDifferencesDifferentiator), module, "FiniteDifferencesDifferentiator", 0);
        }

        void t_FiniteDifferencesDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "class_", make_descriptor(FiniteDifferencesDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "wrapfn_", make_descriptor(t_FiniteDifferencesDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencesDifferentiator::wrap_Object(FiniteDifferencesDifferentiator(((t_FiniteDifferencesDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1, a2, a3));
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

        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPoints());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStepSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPoints());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStepSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
