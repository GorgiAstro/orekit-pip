#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *FileFormat::class$ = NULL;
          jmethodID *FileFormat::mids$ = NULL;
          bool FileFormat::live$ = false;
          FileFormat *FileFormat::KVN = NULL;
          FileFormat *FileFormat::XML = NULL;

          jclass FileFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/FileFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_1ac97a1ee0c2cc33] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/FileFormat;");
              mids$[mid_values_183a87ad50588e17] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/FileFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KVN = new FileFormat(env->getStaticObjectField(cls, "KVN", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              XML = new FileFormat(env->getStaticObjectField(cls, "XML", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FileFormat FileFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FileFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1ac97a1ee0c2cc33], a0.this$));
          }

          JArray< FileFormat > FileFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< FileFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_183a87ad50588e17]));
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
          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args);
          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_FileFormat_values(PyTypeObject *type);
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data);
          static PyGetSetDef t_FileFormat__fields_[] = {
            DECLARE_GET_FIELD(t_FileFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FileFormat__methods_[] = {
            DECLARE_METHOD(t_FileFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_FileFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FileFormat)[] = {
            { Py_tp_methods, t_FileFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FileFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FileFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(FileFormat, t_FileFormat, FileFormat);
          PyObject *t_FileFormat::wrap_Object(const FileFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FileFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FileFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(FileFormat), &PY_TYPE_DEF(FileFormat), module, "FileFormat", 0);
          }

          void t_FileFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "class_", make_descriptor(FileFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "wrapfn_", make_descriptor(t_FileFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(FileFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "KVN", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::KVN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "XML", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::XML)));
          }

          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FileFormat::initializeClass, 1)))
              return NULL;
            return t_FileFormat::wrap_Object(FileFormat(((t_FileFormat *) arg)->object.this$));
          }
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FileFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            FileFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::valueOf(a0));
              return t_FileFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_FileFormat_values(PyTypeObject *type)
          {
            JArray< FileFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::values());
            return JArray<jobject>(result.this$).wrap(t_FileFormat::wrap_jobject);
          }
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data)
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
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolverImpl::class$ = NULL;
      jmethodID *RiccatiEquationSolverImpl::mids$ = NULL;
      bool RiccatiEquationSolverImpl::live$ = false;

      jclass RiccatiEquationSolverImpl::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolverImpl");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7723a5eca38136a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getK_7116bbecdd8ceb21] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RiccatiEquationSolverImpl::RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7723a5eca38136a5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
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
      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data);
      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolverImpl__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolverImpl__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolverImpl)[] = {
        { Py_tp_methods, t_RiccatiEquationSolverImpl__methods_ },
        { Py_tp_init, (void *) t_RiccatiEquationSolverImpl_init_ },
        { Py_tp_getset, t_RiccatiEquationSolverImpl__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolverImpl)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolverImpl, t_RiccatiEquationSolverImpl, RiccatiEquationSolverImpl);

      void t_RiccatiEquationSolverImpl::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolverImpl), &PY_TYPE_DEF(RiccatiEquationSolverImpl), module, "RiccatiEquationSolverImpl", 0);
      }

      void t_RiccatiEquationSolverImpl::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "class_", make_descriptor(RiccatiEquationSolverImpl::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "wrapfn_", make_descriptor(t_RiccatiEquationSolverImpl::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolverImpl::wrap_Object(RiccatiEquationSolverImpl(((t_RiccatiEquationSolverImpl *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
        RiccatiEquationSolverImpl object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = RiccatiEquationSolverImpl(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *AdMethodType::class$ = NULL;
          jmethodID *AdMethodType::mids$ = NULL;
          bool AdMethodType::live$ = false;
          AdMethodType *AdMethodType::BATCH = NULL;
          AdMethodType *AdMethodType::EKF = NULL;
          AdMethodType *AdMethodType::FILTER_SMOOTHER = NULL;
          AdMethodType *AdMethodType::QUEST = NULL;
          AdMethodType *AdMethodType::Q_METHOD = NULL;
          AdMethodType *AdMethodType::TRIAD = NULL;

          jclass AdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/AdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_66c583535c162a19] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/AdMethodType;");
              mids$[mid_values_36d66a4cda74f573] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/AdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BATCH = new AdMethodType(env->getStaticObjectField(cls, "BATCH", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              EKF = new AdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              FILTER_SMOOTHER = new AdMethodType(env->getStaticObjectField(cls, "FILTER_SMOOTHER", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              QUEST = new AdMethodType(env->getStaticObjectField(cls, "QUEST", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              Q_METHOD = new AdMethodType(env->getStaticObjectField(cls, "Q_METHOD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              TRIAD = new AdMethodType(env->getStaticObjectField(cls, "TRIAD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AdMethodType AdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return AdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_66c583535c162a19], a0.this$));
          }

          JArray< AdMethodType > AdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< AdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_36d66a4cda74f573]));
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
          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args);
          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_AdMethodType_values(PyTypeObject *type);
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data);
          static PyGetSetDef t_AdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_AdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AdMethodType__methods_[] = {
            DECLARE_METHOD(t_AdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_AdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AdMethodType)[] = {
            { Py_tp_methods, t_AdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(AdMethodType, t_AdMethodType, AdMethodType);
          PyObject *t_AdMethodType::wrap_Object(const AdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(AdMethodType), &PY_TYPE_DEF(AdMethodType), module, "AdMethodType", 0);
          }

          void t_AdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "class_", make_descriptor(AdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "wrapfn_", make_descriptor(t_AdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(AdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "BATCH", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::BATCH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "EKF", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "FILTER_SMOOTHER", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::FILTER_SMOOTHER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "QUEST", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::QUEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "Q_METHOD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::Q_METHOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "TRIAD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::TRIAD)));
          }

          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AdMethodType::initializeClass, 1)))
              return NULL;
            return t_AdMethodType::wrap_Object(AdMethodType(((t_AdMethodType *) arg)->object.this$));
          }
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            AdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::valueOf(a0));
              return t_AdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_AdMethodType_values(PyTypeObject *type)
          {
            JArray< AdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_AdMethodType::wrap_jobject);
          }
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeTroposphericDelayModifier::mids$ = NULL;
          bool RangeTroposphericDelayModifier::live$ = false;

          jclass RangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeTroposphericDelayModifier::RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          void RangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void RangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeTroposphericDelayModifier, t_RangeTroposphericDelayModifier, RangeTroposphericDelayModifier);

          void t_RangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeTroposphericDelayModifier), &PY_TYPE_DEF(RangeTroposphericDelayModifier), module, "RangeTroposphericDelayModifier", 0);
          }

          void t_RangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "class_", make_descriptor(RangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeTroposphericDelayModifier::wrap_Object(RangeTroposphericDelayModifier(((t_RangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            RangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = RangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFParser::class$ = NULL;
        jmethodID *CPFParser::mids$ = NULL;
        bool CPFParser::live$ = false;

        jclass CPFParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_d5a18dcb3f2a834f] = env->getMethodID(cls, "<init>", "(DILorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frames;)V");
            mids$[mid_parse_d6e3c1772e77553f] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CPF;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFParser::CPFParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        CPFParser::CPFParser(jdouble a0, jint a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frames & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5a18dcb3f2a834f, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::files::ilrs::CPF CPFParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CPF(env->callObjectMethod(this$, mids$[mid_parse_d6e3c1772e77553f], a0.this$));
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
        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg);

        static PyMethodDef t_CPFParser__methods_[] = {
          DECLARE_METHOD(t_CPFParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFParser)[] = {
          { Py_tp_methods, t_CPFParser__methods_ },
          { Py_tp_init, (void *) t_CPFParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFParser, t_CPFParser, CPFParser);

        void t_CPFParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFParser), &PY_TYPE_DEF(CPFParser), module, "CPFParser", 0);
        }

        void t_CPFParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "class_", make_descriptor(CPFParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "wrapfn_", make_descriptor(t_CPFParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFParser::initializeClass, 1)))
            return NULL;
          return t_CPFParser::wrap_Object(CPFParser(((t_CPFParser *) arg)->object.this$));
        }
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CPFParser object((jobject) NULL);

              INT_CALL(object = CPFParser());
              self->object = object;
              break;
            }
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::frames::Frames a4((jobject) NULL);
              CPFParser object((jobject) NULL);

              if (!parseArgs(args, "DIKkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
              {
                INT_CALL(object = CPFParser(a0, a1, a2, a3, a4));
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

        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CPF::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularRaDecBuilder::class$ = NULL;
          jmethodID *AngularRaDecBuilder::mids$ = NULL;
          bool AngularRaDecBuilder::live$ = false;

          jclass AngularRaDecBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularRaDecBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_eb87c35892990352] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_ded92689725063fe] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularRaDec;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRaDecBuilder::AngularRaDecBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::frames::Frame & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_eb87c35892990352, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          ::org::orekit::estimation::measurements::AngularRaDec AngularRaDecBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularRaDec(env->callObjectMethod(this$, mids$[mid_build_ded92689725063fe], a0.this$, a1.this$));
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
          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args);
          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args);
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data);
          static PyGetSetDef t_AngularRaDecBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRaDecBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRaDecBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularRaDecBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularRaDecBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRaDecBuilder)[] = {
            { Py_tp_methods, t_AngularRaDecBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularRaDecBuilder_init_ },
            { Py_tp_getset, t_AngularRaDecBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRaDecBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularRaDecBuilder, t_AngularRaDecBuilder, AngularRaDecBuilder);
          PyObject *t_AngularRaDecBuilder::wrap_Object(const AngularRaDecBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularRaDecBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularRaDecBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRaDecBuilder), &PY_TYPE_DEF(AngularRaDecBuilder), module, "AngularRaDecBuilder", 0);
          }

          void t_AngularRaDecBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "class_", make_descriptor(AngularRaDecBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "wrapfn_", make_descriptor(t_AngularRaDecBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRaDecBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularRaDecBuilder::wrap_Object(AngularRaDecBuilder(((t_AngularRaDecBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRaDecBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            AngularRaDecBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = AngularRaDecBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularRaDec result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularRaDec::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularRaDecBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data)
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
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *ConstantProcessNoise::class$ = NULL;
        jmethodID *ConstantProcessNoise::mids$ = NULL;
        bool ConstantProcessNoise::live$ = false;

        jclass ConstantProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/ConstantProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_02010c9812f2009b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_02010c9812f2009b, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix ConstantProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d], a0.this$, a1.this$));
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
        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args);

        static PyMethodDef t_ConstantProcessNoise__methods_[] = {
          DECLARE_METHOD(t_ConstantProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantProcessNoise)[] = {
          { Py_tp_methods, t_ConstantProcessNoise__methods_ },
          { Py_tp_init, (void *) t_ConstantProcessNoise_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(ConstantProcessNoise, t_ConstantProcessNoise, ConstantProcessNoise);

        void t_ConstantProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantProcessNoise), &PY_TYPE_DEF(ConstantProcessNoise), module, "ConstantProcessNoise", 0);
        }

        void t_ConstantProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "class_", make_descriptor(ConstantProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "wrapfn_", make_descriptor(t_ConstantProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantProcessNoise::initializeClass, 1)))
            return NULL;
          return t_ConstantProcessNoise::wrap_Object(ConstantProcessNoise(((t_ConstantProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = ConstantProcessNoise(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConstantProcessNoise(a0, a1));
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

        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(ConstantProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAdaptableInterval::class$ = NULL;
        jmethodID *PythonAdaptableInterval::mids$ = NULL;
        bool PythonAdaptableInterval::live$ = false;

        jclass PythonAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_66a2f071e6ed0c06] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdaptableInterval::PythonAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self);
        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdaptableInterval, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdaptableInterval, t_PythonAdaptableInterval, PythonAdaptableInterval);

        void t_PythonAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdaptableInterval), &PY_TYPE_DEF(PythonAdaptableInterval), module, "PythonAdaptableInterval", 1);
        }

        void t_PythonAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "class_", make_descriptor(PythonAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "wrapfn_", make_descriptor(t_PythonAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonAdaptableInterval::wrap_Object(PythonAdaptableInterval(((t_PythonAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data)
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
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MaxSelector::class$ = NULL;
        jmethodID *MaxSelector::mids$ = NULL;
        bool MaxSelector::live$ = false;

        jclass MaxSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MaxSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_3383ba522bfe4b7a] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MaxSelector;");
            mids$[mid_selectFirst_a836bdf37f582c99] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MaxSelector MaxSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MaxSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3383ba522bfe4b7a]));
        }

        jboolean MaxSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_a836bdf37f582c99], a0, a1);
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
      namespace utils {
        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args);
        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data);
        static PyGetSetDef t_MaxSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MaxSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MaxSelector__methods_[] = {
          DECLARE_METHOD(t_MaxSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MaxSelector)[] = {
          { Py_tp_methods, t_MaxSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MaxSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MaxSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MaxSelector, t_MaxSelector, MaxSelector);

        void t_MaxSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MaxSelector), &PY_TYPE_DEF(MaxSelector), module, "MaxSelector", 0);
        }

        void t_MaxSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "class_", make_descriptor(MaxSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "wrapfn_", make_descriptor(t_MaxSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MaxSelector::initializeClass, 1)))
            return NULL;
          return t_MaxSelector::wrap_Object(MaxSelector(((t_MaxSelector *) arg)->object.this$));
        }
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MaxSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type)
        {
          MaxSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MaxSelector::getInstance());
          return t_MaxSelector::wrap_Object(result);
        }

        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MaxSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data)
        {
          MaxSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MaxSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *BinomialTest::class$ = NULL;
        jmethodID *BinomialTest::mids$ = NULL;
        bool BinomialTest::live$ = false;

        jclass BinomialTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/BinomialTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_binomialTest_3d3c45b921f1f99a] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;)D");
            mids$[mid_binomialTest_893b7f2230dbc092] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialTest::BinomialTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_binomialTest_3d3c45b921f1f99a], a0, a1, a2, a3.this$);
        }

        jboolean BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3, jdouble a4) const
        {
          return env->callBooleanMethod(this$, mids$[mid_binomialTest_893b7f2230dbc092], a0, a1, a2, a3.this$, a4);
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
      namespace inference {
        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args);

        static PyMethodDef t_BinomialTest__methods_[] = {
          DECLARE_METHOD(t_BinomialTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, binomialTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialTest)[] = {
          { Py_tp_methods, t_BinomialTest__methods_ },
          { Py_tp_init, (void *) t_BinomialTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialTest, t_BinomialTest, BinomialTest);

        void t_BinomialTest::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialTest), &PY_TYPE_DEF(BinomialTest), module, "BinomialTest", 0);
        }

        void t_BinomialTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "class_", make_descriptor(BinomialTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "wrapfn_", make_descriptor(t_BinomialTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialTest::initializeClass, 1)))
            return NULL;
          return t_BinomialTest::wrap_Object(BinomialTest(((t_BinomialTest *) arg)->object.this$));
        }
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds)
        {
          BinomialTest object((jobject) NULL);

          INT_CALL(object = BinomialTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble result;

              if (!parseArgs(args, "IIDK", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jboolean result;

              if (!parseArgs(args, "IIDKD", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "binomialTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame::mids$ = NULL;
      bool LocalMagneticFieldFrame::live$ = false;

      jclass LocalMagneticFieldFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e10339a361902022] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_d350d92215d291fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getMagneticField_b16f46e2ba1f1c67] = env->getMethodID(cls, "getMagneticField", "()Lorg/orekit/models/earth/GeoMagneticField;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_95b12e29918a648c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_346e8a02c9c839ea] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e10339a361902022, a0.this$, a1.this$, a2.this$)) {}

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector & a2, const ::org::orekit::frames::Frame & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d350d92215d291fa, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::frames::Frame LocalMagneticFieldFrame::getInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::models::earth::GeoMagneticField LocalMagneticFieldFrame::getMagneticField() const
      {
        return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getMagneticField_b16f46e2ba1f1c67]));
      }

      ::java::lang::String LocalMagneticFieldFrame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_95b12e29918a648c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_346e8a02c9c839ea], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, inertialFrame),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, magneticField),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getMagneticField, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getName, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, rotationFromInertial, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame__methods_ },
        { Py_tp_init, (void *) t_LocalMagneticFieldFrame_init_ },
        { Py_tp_getset, t_LocalMagneticFieldFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame, t_LocalMagneticFieldFrame, LocalMagneticFieldFrame);

      void t_LocalMagneticFieldFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame), &PY_TYPE_DEF(LocalMagneticFieldFrame), module, "LocalMagneticFieldFrame", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "LOFBuilderVector", make_descriptor(&PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector)));
      }

      void t_LocalMagneticFieldFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "class_", make_descriptor(LocalMagneticFieldFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame::wrap_Object(LocalMagneticFieldFrame(((t_LocalMagneticFieldFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::frames::t_LocalMagneticFieldFrame$LOFBuilderVector::parameters_, &a3))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2, a3));
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

      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);
        OBJ_CALL(result = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
        OBJ_CALL(value = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoAlmanac::class$ = NULL;
            jmethodID *GalileoAlmanac::mids$ = NULL;
            bool GalileoAlmanac::live$ = false;

            jclass GalileoAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealthE1_f2f64475e4580546] = env->getMethodID(cls, "getHealthE1", "()I");
                mids$[mid_getHealthE5a_f2f64475e4580546] = env->getMethodID(cls, "getHealthE5a", "()I");
                mids$[mid_getHealthE5b_f2f64475e4580546] = env->getMethodID(cls, "getHealthE5b", "()I");
                mids$[mid_getIOD_f2f64475e4580546] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_setDeltaInc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaInc", "(D)V");
                mids$[mid_setDeltaSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaSqrtA", "(D)V");
                mids$[mid_setHealthE1_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealthE1", "(I)V");
                mids$[mid_setHealthE5a_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealthE5a", "(I)V");
                mids$[mid_setHealthE5b_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealthE5b", "(I)V");
                mids$[mid_setIOD_0a2a1ac2721c0336] = env->getMethodID(cls, "setIOD", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoAlmanac::GalileoAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint GalileoAlmanac::getHealthE1() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE1_f2f64475e4580546]);
            }

            jint GalileoAlmanac::getHealthE5a() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5a_f2f64475e4580546]);
            }

            jint GalileoAlmanac::getHealthE5b() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5b_f2f64475e4580546]);
            }

            jint GalileoAlmanac::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_f2f64475e4580546]);
            }

            void GalileoAlmanac::setDeltaInc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaInc_77e0f9a1f260e2e5], a0);
            }

            void GalileoAlmanac::setDeltaSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaSqrtA_77e0f9a1f260e2e5], a0);
            }

            void GalileoAlmanac::setHealthE1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE1_0a2a1ac2721c0336], a0);
            }

            void GalileoAlmanac::setHealthE5a(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5a_0a2a1ac2721c0336], a0);
            }

            void GalileoAlmanac::setHealthE5b(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5b_0a2a1ac2721c0336], a0);
            }

            void GalileoAlmanac::setIOD(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIOD_0a2a1ac2721c0336], a0);
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
            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg);
            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaInc),
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaSqrtA),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE1),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5a),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5b),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, iOD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoAlmanac__methods_[] = {
              DECLARE_METHOD(t_GalileoAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5b, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaInc, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaSqrtA, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE1, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5a, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5b, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setIOD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoAlmanac)[] = {
              { Py_tp_methods, t_GalileoAlmanac__methods_ },
              { Py_tp_init, (void *) t_GalileoAlmanac_init_ },
              { Py_tp_getset, t_GalileoAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GalileoAlmanac, t_GalileoAlmanac, GalileoAlmanac);

            void t_GalileoAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoAlmanac), &PY_TYPE_DEF(GalileoAlmanac), module, "GalileoAlmanac", 0);
            }

            void t_GalileoAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "class_", make_descriptor(GalileoAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "wrapfn_", make_descriptor(t_GalileoAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoAlmanac::initializeClass, 1)))
                return NULL;
              return t_GalileoAlmanac::wrap_Object(GalileoAlmanac(((t_GalileoAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GalileoAlmanac object((jobject) NULL);

              INT_CALL(object = GalileoAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5a());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5b());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaInc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaInc", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5b", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIOD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIOD", arg);
              return NULL;
            }

            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaInc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaInc", arg);
              return -1;
            }

            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaSqrtA", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE1());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE1", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5a());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5a", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5b());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5b", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIOD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iOD", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$MeteorologicalMeasurement::class$ = NULL;
        jmethodID *CRD$MeteorologicalMeasurement::mids$ = NULL;
        bool CRD$MeteorologicalMeasurement::live$ = false;

        jclass CRD$MeteorologicalMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$MeteorologicalMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_31c218e31eeb88a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_init$_dbbcec0d9f0ca756] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDI)V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getHumidity_456d9a2f64d6b28d] = env->getMethodID(cls, "getHumidity", "()D");
            mids$[mid_getOriginOfValues_f2f64475e4580546] = env->getMethodID(cls, "getOriginOfValues", "()I");
            mids$[mid_getPressure_456d9a2f64d6b28d] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getTemperature_456d9a2f64d6b28d] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31c218e31eeb88a8, a0.this$, a1, a2, a3)) {}

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dbbcec0d9f0ca756, a0.this$, a1, a2, a3, a4)) {}

        ::org::orekit::time::AbsoluteDate CRD$MeteorologicalMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jdouble CRD$MeteorologicalMeasurement::getHumidity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHumidity_456d9a2f64d6b28d]);
        }

        jint CRD$MeteorologicalMeasurement::getOriginOfValues() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginOfValues_f2f64475e4580546]);
        }

        jdouble CRD$MeteorologicalMeasurement::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_456d9a2f64d6b28d]);
        }

        jdouble CRD$MeteorologicalMeasurement::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyGetSetDef t_CRD$MeteorologicalMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, humidity),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, originOfValues),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, pressure),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$MeteorologicalMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getHumidity, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getOriginOfValues, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$MeteorologicalMeasurement)[] = {
          { Py_tp_methods, t_CRD$MeteorologicalMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$MeteorologicalMeasurement_init_ },
          { Py_tp_getset, t_CRD$MeteorologicalMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$MeteorologicalMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$MeteorologicalMeasurement, t_CRD$MeteorologicalMeasurement, CRD$MeteorologicalMeasurement);

        void t_CRD$MeteorologicalMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$MeteorologicalMeasurement), &PY_TYPE_DEF(CRD$MeteorologicalMeasurement), module, "CRD$MeteorologicalMeasurement", 0);
        }

        void t_CRD$MeteorologicalMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "class_", make_descriptor(CRD$MeteorologicalMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "wrapfn_", make_descriptor(t_CRD$MeteorologicalMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$MeteorologicalMeasurement::wrap_Object(CRD$MeteorologicalMeasurement(((t_CRD$MeteorologicalMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHumidity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginOfValues());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$MeteorologicalMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHumidity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginOfValues());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGooding::class$ = NULL;
        jmethodID *IodGooding::mids$ = NULL;
        bool IodGooding::live$ = false;

        jclass IodGooding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGooding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_8a40756da47c2b16] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_c8f0acbeb1ebbf95] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_7db373ca74b69fc4] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_03fd19db71d2d39b] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_99b757b590ad23f0] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a18827d23b8f9cad] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getRange1_456d9a2f64d6b28d] = env->getMethodID(cls, "getRange1", "()D");
            mids$[mid_getRange2_456d9a2f64d6b28d] = env->getMethodID(cls, "getRange2", "()D");
            mids$[mid_getRange3_456d9a2f64d6b28d] = env->getMethodID(cls, "getRange3", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGooding::IodGooding(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_8a40756da47c2b16], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_c8f0acbeb1ebbf95], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_7db373ca74b69fc4], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_03fd19db71d2d39b], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_99b757b590ad23f0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11, jint a12, jboolean a13) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a18827d23b8f9cad], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11, a12, a13));
        }

        jdouble IodGooding::getRange1() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange1_456d9a2f64d6b28d]);
        }

        jdouble IodGooding::getRange2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange2_456d9a2f64d6b28d]);
        }

        jdouble IodGooding::getRange3() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange3_456d9a2f64d6b28d]);
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
      namespace iod {
        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args);
        static PyObject *t_IodGooding_getRange1(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange2(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange3(t_IodGooding *self);
        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data);
        static PyGetSetDef t_IodGooding__fields_[] = {
          DECLARE_GET_FIELD(t_IodGooding, range1),
          DECLARE_GET_FIELD(t_IodGooding, range2),
          DECLARE_GET_FIELD(t_IodGooding, range3),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IodGooding__methods_[] = {
          DECLARE_METHOD(t_IodGooding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, estimate, METH_VARARGS),
          DECLARE_METHOD(t_IodGooding, getRange1, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange2, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange3, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGooding)[] = {
          { Py_tp_methods, t_IodGooding__methods_ },
          { Py_tp_init, (void *) t_IodGooding_init_ },
          { Py_tp_getset, t_IodGooding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGooding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGooding, t_IodGooding, IodGooding);

        void t_IodGooding::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGooding), &PY_TYPE_DEF(IodGooding), module, "IodGooding", 0);
        }

        void t_IodGooding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "class_", make_descriptor(IodGooding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "wrapfn_", make_descriptor(t_IodGooding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGooding::initializeClass, 1)))
            return NULL;
          return t_IodGooding::wrap_Object(IodGooding(((t_IodGooding *) arg)->object.this$));
        }
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGooding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGooding object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGooding(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDD", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 14:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              jint a12;
              jboolean a13;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_IodGooding_getRange1(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange1());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange2(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange3(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange3());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange1());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange3());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonAdditionalStateProvider::mids$ = NULL;
      bool PythonAdditionalStateProvider::live$ = false;

      jclass PythonAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_97634138963fb58a] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/SpacecraftState;)Z");
          mids$[mid_yield__97634138963fb58a] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAdditionalStateProvider::PythonAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }

      jboolean PythonAdditionalStateProvider::yield(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_97634138963fb58a], a0.this$);
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
      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self);
      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAdditionalStateProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAdditionalStateProvider, t_PythonAdditionalStateProvider, PythonAdditionalStateProvider);

      void t_PythonAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAdditionalStateProvider), &PY_TYPE_DEF(PythonAdditionalStateProvider), module, "PythonAdditionalStateProvider", 1);
      }

      void t_PythonAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "class_", make_descriptor(PythonAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAdditionalStateProvider::wrap_Object(PythonAdditionalStateProvider(((t_PythonAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data)
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
#include "org/orekit/utils/MultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooting::class$ = NULL;
      jmethodID *MultipleShooting::mids$ = NULL;
      bool MultipleShooting::live$ = false;

      jclass MultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_a6156df500549a58] = env->getMethodID(cls, "compute", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_a6156df500549a58]));
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
      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self);

      static PyMethodDef t_MultipleShooting__methods_[] = {
        DECLARE_METHOD(t_MultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, compute, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooting)[] = {
        { Py_tp_methods, t_MultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultipleShooting, t_MultipleShooting, MultipleShooting);

      void t_MultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooting), &PY_TYPE_DEF(MultipleShooting), module, "MultipleShooting", 0);
      }

      void t_MultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "class_", make_descriptor(MultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "wrapfn_", make_descriptor(t_MultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooting::initializeClass, 1)))
          return NULL;
        return t_MultipleShooting::wrap_Object(MultipleShooting(((t_MultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector$Entry::class$ = NULL;
      jmethodID *RealVector$Entry::mids$ = NULL;
      bool RealVector$Entry::live$ = false;

      jclass RealVector$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_df4ee11a06094b55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_getIndex_f2f64475e4580546] = env->getMethodID(cls, "getIndex", "()I");
          mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_setIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "setIndex", "(I)V");
          mids$[mid_setValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setValue", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector$Entry::RealVector$Entry(const ::org::hipparchus::linear::RealVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df4ee11a06094b55, a0.this$)) {}

      jint RealVector$Entry::getIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getIndex_f2f64475e4580546]);
      }

      jdouble RealVector$Entry::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
      }

      void RealVector$Entry::setIndex(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIndex_0a2a1ac2721c0336], a0);
      }

      void RealVector$Entry::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_77e0f9a1f260e2e5], a0);
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
      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyGetSetDef t_RealVector$Entry__fields_[] = {
        DECLARE_GETSET_FIELD(t_RealVector$Entry, index),
        DECLARE_GETSET_FIELD(t_RealVector$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector$Entry__methods_[] = {
        DECLARE_METHOD(t_RealVector$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, getIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, setIndex, METH_O),
        DECLARE_METHOD(t_RealVector$Entry, setValue, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector$Entry)[] = {
        { Py_tp_methods, t_RealVector$Entry__methods_ },
        { Py_tp_init, (void *) t_RealVector$Entry_init_ },
        { Py_tp_getset, t_RealVector$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector$Entry, t_RealVector$Entry, RealVector$Entry);

      void t_RealVector$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector$Entry), &PY_TYPE_DEF(RealVector$Entry), module, "RealVector$Entry", 0);
      }

      void t_RealVector$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "class_", make_descriptor(RealVector$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "wrapfn_", make_descriptor(t_RealVector$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector$Entry::initializeClass, 1)))
          return NULL;
        return t_RealVector$Entry::wrap_Object(RealVector$Entry(((t_RealVector$Entry *) arg)->object.this$));
      }
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        RealVector$Entry object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          INT_CALL(object = RealVector$Entry(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIndex(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIndex());
        return PyLong_FromLong((long) value);
      }
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIndex(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "index", arg);
        return -1;
      }

      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
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
                  mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter2DPOCMethod::PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

              void PythonAbstractShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
              }

              jlong PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
              }

              void PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/hipparchus/analysis/solvers/MullerSolver2.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver2::class$ = NULL;
        jmethodID *MullerSolver2::mids$ = NULL;
        bool MullerSolver2::live$ = false;

        jclass MullerSolver2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver2::MullerSolver2() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        MullerSolver2::MullerSolver2(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        MullerSolver2::MullerSolver2(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}
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
        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args);
        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data);
        static PyGetSetDef t_MullerSolver2__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver2__methods_[] = {
          DECLARE_METHOD(t_MullerSolver2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver2)[] = {
          { Py_tp_methods, t_MullerSolver2__methods_ },
          { Py_tp_init, (void *) t_MullerSolver2_init_ },
          { Py_tp_getset, t_MullerSolver2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver2, t_MullerSolver2, MullerSolver2);
        PyObject *t_MullerSolver2::wrap_Object(const MullerSolver2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver2::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver2), &PY_TYPE_DEF(MullerSolver2), module, "MullerSolver2", 0);
        }

        void t_MullerSolver2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "class_", make_descriptor(MullerSolver2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "wrapfn_", make_descriptor(t_MullerSolver2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver2::initializeClass, 1)))
            return NULL;
          return t_MullerSolver2::wrap_Object(MullerSolver2(((t_MullerSolver2 *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver2 object((jobject) NULL);

              INT_CALL(object = MullerSolver2());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver2(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver2(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityData::class$ = NULL;
            jmethodID *AbstractSolarActivityData::mids$ = NULL;
            bool AbstractSolarActivityData::live$ = false;

            jclass AbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a50d29c52c558493] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_getCache_46988589dce382bb] = env->getMethodID(cls, "getCache", "()Lorg/orekit/utils/GenericTimeStampedCache;");
                mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
                mids$[mid_getUTC_63ac10047983bd43] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_getLinearInterpolation_78b9b84952a70e2a] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/function/Function;)D");
                mids$[mid_getLinearInterpolation_335e665ed012e281] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityData$LocalSolarActivity;Ljava/util/function/Function;)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractSolarActivityData::AbstractSolarActivityData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a50d29c52c558493, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            ::org::orekit::utils::GenericTimeStampedCache AbstractSolarActivityData::getCache() const
            {
              return ::org::orekit::utils::GenericTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCache_46988589dce382bb]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
            }

            ::java::lang::String AbstractSolarActivityData::getSupportedNames() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityData::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_63ac10047983bd43]));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args);
            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, cache),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, maxDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, supportedNames),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getCache, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getSupportedNames, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getUTC, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityData)[] = {
              { Py_tp_methods, t_AbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_AbstractSolarActivityData_init_ },
              { Py_tp_getset, t_AbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityData, t_AbstractSolarActivityData, AbstractSolarActivityData);
            PyObject *t_AbstractSolarActivityData::wrap_Object(const AbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityData), &PY_TYPE_DEF(AbstractSolarActivityData), module, "AbstractSolarActivityData", 0);
            }

            void t_AbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "class_", make_descriptor(AbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "wrapfn_", make_descriptor(t_AbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityData::wrap_Object(AbstractSolarActivityData(((t_AbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::utils::GenericTimeStampedCache result((jobject) NULL);
              OBJ_CALL(result = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSupportedNames());
              return j2p(result);
            }

            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::utils::GenericTimeStampedCache value((jobject) NULL);
              OBJ_CALL(value = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSupportedNames());
              return j2p(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/PoissonSeries.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeriesParser::class$ = NULL;
      jmethodID *PoissonSeriesParser::mids$ = NULL;
      bool PoissonSeriesParser::live$ = false;

      jclass PoissonSeriesParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeriesParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_parse_4eece4cc8d740130] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/orekit/data/PoissonSeries;");
          mids$[mid_withDoodson_4f572948f8ae1514] = env->getMethodID(cls, "withDoodson", "(II)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstDelaunay_3f1b3bf2b0b52275] = env->getMethodID(cls, "withFirstDelaunay", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstPlanetary_3f1b3bf2b0b52275] = env->getMethodID(cls, "withFirstPlanetary", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withGamma_3f1b3bf2b0b52275] = env->getMethodID(cls, "withGamma", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withOptionalColumn_3f1b3bf2b0b52275] = env->getMethodID(cls, "withOptionalColumn", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withPolynomialPart_3ce75c3d41c2dd8c] = env->getMethodID(cls, "withPolynomialPart", "(CLorg/orekit/data/PolynomialParser$Unit;)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withSinCos_e878158c248c0fbd] = env->getMethodID(cls, "withSinCos", "(IIDID)Lorg/orekit/data/PoissonSeriesParser;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeriesParser::PoissonSeriesParser(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ::org::orekit::data::PoissonSeries PoissonSeriesParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::data::PoissonSeries(env->callObjectMethod(this$, mids$[mid_parse_4eece4cc8d740130], a0.this$, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withDoodson(jint a0, jint a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withDoodson_4f572948f8ae1514], a0, a1));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstDelaunay(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstDelaunay_3f1b3bf2b0b52275], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstPlanetary(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstPlanetary_3f1b3bf2b0b52275], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withGamma(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withGamma_3f1b3bf2b0b52275], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withOptionalColumn(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withOptionalColumn_3f1b3bf2b0b52275], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withPolynomialPart(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withPolynomialPart_3ce75c3d41c2dd8c], a0, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withSinCos(jint a0, jint a1, jdouble a2, jint a3, jdouble a4) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withSinCos_e878158c248c0fbd], a0, a1, a2, a3, a4));
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
      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args);

      static PyMethodDef t_PoissonSeriesParser__methods_[] = {
        DECLARE_METHOD(t_PoissonSeriesParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, parse, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withDoodson, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstDelaunay, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstPlanetary, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withGamma, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withOptionalColumn, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withPolynomialPart, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withSinCos, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeriesParser)[] = {
        { Py_tp_methods, t_PoissonSeriesParser__methods_ },
        { Py_tp_init, (void *) t_PoissonSeriesParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeriesParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeriesParser, t_PoissonSeriesParser, PoissonSeriesParser);

      void t_PoissonSeriesParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeriesParser), &PY_TYPE_DEF(PoissonSeriesParser), module, "PoissonSeriesParser", 0);
      }

      void t_PoissonSeriesParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "class_", make_descriptor(PoissonSeriesParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "wrapfn_", make_descriptor(t_PoissonSeriesParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeriesParser::initializeClass, 1)))
          return NULL;
        return t_PoissonSeriesParser::wrap_Object(PoissonSeriesParser(((t_PoissonSeriesParser *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeriesParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        PoissonSeriesParser object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = PoissonSeriesParser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::data::PoissonSeries result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::orekit::data::t_PoissonSeries::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.withDoodson(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withDoodson", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstDelaunay(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstDelaunay", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstPlanetary(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstPlanetary", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withGamma(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withGamma", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withOptionalColumn(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withOptionalColumn", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          OBJ_CALL(result = self->object.withPolynomialPart(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withPolynomialPart", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jint a3;
        jdouble a4;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "IIDID", &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.withSinCos(a0, a1, a2, a3, a4));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withSinCos", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeFieldIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeFieldIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeFieldIntegrator::live$ = false;

        jclass AdaptiveStepsizeFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d742eb7407cf560] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_33c0af90f11a227f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_12a30531f10c8169] = env->getMethodID(cls, "initializeStep", "(ZI[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)D");
            mids$[mid_setInitialStepSize_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_e5787c5177784e12] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_667a7965403ed91a] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_sanityChecks_2231c8fee9b0ac70] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getStepSizeHelper_b1c87be850abd6a4] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_resetInternalState_7ae3461a92a43152] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1d742eb7407cf560, a0.this$, a1.this$, a2, a3, a4.this$, a5.this$)) {}

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_33c0af90f11a227f, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        jdouble AdaptiveStepsizeFieldIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_456d9a2f64d6b28d]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_456d9a2f64d6b28d]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::initializeStep(jboolean a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a3, const ::org::hipparchus::ode::FieldEquationsMapper & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_12a30531f10c8169], a0, a1, a2.this$, a3.this$, a4.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_77e0f9a1f260e2e5], a0);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_e5787c5177784e12], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_667a7965403ed91a], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeFieldIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeFieldIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, minStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeFieldIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeFieldIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeFieldIntegrator, t_AdaptiveStepsizeFieldIntegrator, AdaptiveStepsizeFieldIntegrator);
        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_Object(const AdaptiveStepsizeFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdaptiveStepsizeFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeFieldIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator), module, "AdaptiveStepsizeFieldIntegrator", 0);
        }

        void t_AdaptiveStepsizeFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "class_", make_descriptor(AdaptiveStepsizeFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeFieldIntegrator::wrap_Object(AdaptiveStepsizeFieldIntegrator(((t_AdaptiveStepsizeFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::ode::FieldEquationsMapper a4((jobject) NULL);
          PyTypeObject **p4;
          jdouble result;

          if (!parseArgs(args, "ZI[KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldEquationsMapper::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a4, &p4, ::org::hipparchus::ode::t_FieldEquationsMapper::parameters_))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventMultipleHandler::class$ = NULL;
          jmethodID *EventMultipleHandler::mids$ = NULL;
          bool EventMultipleHandler::live$ = false;

          jclass EventMultipleHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventMultipleHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addHandler_79d596a0d2732767] = env->getMethodID(cls, "addHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_addHandlers_5935b21d1016a436] = env->getMethodID(cls, "addHandlers", "([Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getHandlers_a6156df500549a58] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
              mids$[mid_init_9678bba57553faaf] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_7c4cfc7ac2bc3a77] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_setHandlers_65de9727799c5641] = env->getMethodID(cls, "setHandlers", "(Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventMultipleHandler::EventMultipleHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          EventMultipleHandler EventMultipleHandler::addHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandler_79d596a0d2732767], a0.this$));
          }

          EventMultipleHandler EventMultipleHandler::addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandlers_5935b21d1016a436], a0.this$));
          }

          ::org::hipparchus::ode::events::Action EventMultipleHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
          }

          ::java::util::List EventMultipleHandler::getHandlers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_a6156df500549a58]));
          }

          void EventMultipleHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_9678bba57553faaf], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventMultipleHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_7c4cfc7ac2bc3a77], a0.this$, a1.this$));
          }

          void EventMultipleHandler::setHandlers(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHandlers_65de9727799c5641], a0.this$);
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
      namespace events {
        namespace handlers {
          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self);
          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data);
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data);
          static PyGetSetDef t_EventMultipleHandler__fields_[] = {
            DECLARE_GETSET_FIELD(t_EventMultipleHandler, handlers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventMultipleHandler__methods_[] = {
            DECLARE_METHOD(t_EventMultipleHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, addHandler, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, addHandlers, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, getHandlers, METH_NOARGS),
            DECLARE_METHOD(t_EventMultipleHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, resetState, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, setHandlers, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventMultipleHandler)[] = {
            { Py_tp_methods, t_EventMultipleHandler__methods_ },
            { Py_tp_init, (void *) t_EventMultipleHandler_init_ },
            { Py_tp_getset, t_EventMultipleHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventMultipleHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventMultipleHandler, t_EventMultipleHandler, EventMultipleHandler);

          void t_EventMultipleHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventMultipleHandler), &PY_TYPE_DEF(EventMultipleHandler), module, "EventMultipleHandler", 0);
          }

          void t_EventMultipleHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "class_", make_descriptor(EventMultipleHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "wrapfn_", make_descriptor(t_EventMultipleHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventMultipleHandler::initializeClass, 1)))
              return NULL;
            return t_EventMultipleHandler::wrap_Object(EventMultipleHandler(((t_EventMultipleHandler *) arg)->object.this$));
          }
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventMultipleHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds)
          {
            EventMultipleHandler object((jobject) NULL);

            INT_CALL(object = EventMultipleHandler());
            self->object = object;

            return 0;
          }

          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandler(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandler", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            JArray< ::org::orekit::propagation::events::handlers::EventHandler > a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandlers(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(EventHandler));
          }

          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setHandlers(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setHandlers(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "handlers", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *FieldVector2D::class$ = NULL;
          jmethodID *FieldVector2D::mids$ = NULL;
          bool FieldVector2D::live$ = false;

          jclass FieldVector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/FieldVector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4c337e4c1ec6f647] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_352b9889038d9b4f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_2454bc47ff933675] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_3b51f6f0524dc15c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_04434637f7791999] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_46c20bc1304e9cc4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_fdb7ea9b391c22af] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_82ef4dc03b7bbbf0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_eb64c6bbf65d0b65] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_6701311ba7899490] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_0bca9fd4561b2d94] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_802ae5b6f3a3fa6e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_ecb72a20903bd71e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_39c3653311c40b8b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_324ec1bfa7639cb3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_5e94b047a6786e99] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_c7bae57a1efc1bdd] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_7848c18b62deaa43] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_04e0d6e6888c483a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_89098438b575a3c6] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_aa6e21563b39f139] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_angle_ab10bcaaac58dd2b] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_9ff49b796eed98bd] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_ebe56a56c0533052] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_ab10bcaaac58dd2b] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_d5358eb2501e5e91] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_2ebef2324cf6257f] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_93a2ffa1cffda1aa] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_ab10bcaaac58dd2b] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_9ff49b796eed98bd] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_ebe56a56c0533052] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_2ebef2324cf6257f] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_93a2ffa1cffda1aa] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_ab10bcaaac58dd2b] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_ebe56a56c0533052] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_9ff49b796eed98bd] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_2ebef2324cf6257f] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_93a2ffa1cffda1aa] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_ab10bcaaac58dd2b] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_ebe56a56c0533052] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_9ff49b796eed98bd] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_2ebef2324cf6257f] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_93a2ffa1cffda1aa] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_ab10bcaaac58dd2b] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_ebe56a56c0533052] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_9ff49b796eed98bd] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_2ebef2324cf6257f] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_93a2ffa1cffda1aa] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getMinusI_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getMinusJ_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNaN_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNegativeInfinity_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNorm_e6d4d3215c30992a] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_e6d4d3215c30992a] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_e6d4d3215c30992a] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_e6d4d3215c30992a] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPlusJ_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPositiveInfinity_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getX_e6d4d3215c30992a] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_e6d4d3215c30992a] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_9fe036a7c29d9f42] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_1f4b20c9530c3106] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_normalize_1f4b20c9530c3106] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_orientation_1b7e5cf328ba7c9d] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_scalarMultiply_d585e03ae746190d] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_scalarMultiply_8343509e74a2a7e1] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_5e94b047a6786e99] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_c7bae57a1efc1bdd] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_7848c18b62deaa43] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_89098438b575a3c6] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_04e0d6e6888c483a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_aa6e21563b39f139] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_toArray_01c7d10e96d5cf94] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector2D_6d781af269bebe5e] = env->getMethodID(cls, "toVector2D", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector2D::FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c337e4c1ec6f647, a0.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_352b9889038d9b4f, a0, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2454bc47ff933675, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b51f6f0524dc15c, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_04434637f7791999, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c20bc1304e9cc4, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdb7ea9b391c22af, a0, a1.this$, a2, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82ef4dc03b7bbbf0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb64c6bbf65d0b65, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6701311ba7899490, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bca9fd4561b2d94, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_802ae5b6f3a3fa6e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5, jdouble a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ecb72a20903bd71e, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39c3653311c40b8b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_324ec1bfa7639cb3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D FieldVector2D::add(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_5e94b047a6786e99], a0.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_c7bae57a1efc1bdd], a0.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_7848c18b62deaa43], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_04e0d6e6888c483a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_89098438b575a3c6], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_aa6e21563b39f139], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_9ff49b796eed98bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_ebe56a56c0533052], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const FieldVector2D & a0, const FieldVector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_d5358eb2501e5e91], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_2ebef2324cf6257f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_93a2ffa1cffda1aa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_9ff49b796eed98bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_ebe56a56c0533052], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_2ebef2324cf6257f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_93a2ffa1cffda1aa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_ebe56a56c0533052], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_9ff49b796eed98bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_2ebef2324cf6257f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_93a2ffa1cffda1aa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_ebe56a56c0533052], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_9ff49b796eed98bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_2ebef2324cf6257f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_93a2ffa1cffda1aa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_ab10bcaaac58dd2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_ebe56a56c0533052], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_9ff49b796eed98bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_2ebef2324cf6257f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_93a2ffa1cffda1aa], a0.this$));
          }

          jboolean FieldVector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          FieldVector2D FieldVector2D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_9fe036a7c29d9f42], a0.this$));
          }

          FieldVector2D FieldVector2D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_9fe036a7c29d9f42], a0.this$));
          }

          FieldVector2D FieldVector2D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_9fe036a7c29d9f42], a0.this$));
          }

          FieldVector2D FieldVector2D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_9fe036a7c29d9f42], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_e6d4d3215c30992a]));
          }

          FieldVector2D FieldVector2D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_9fe036a7c29d9f42], a0.this$));
          }

          FieldVector2D FieldVector2D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_9fe036a7c29d9f42], a0.this$));
          }

          FieldVector2D FieldVector2D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_9fe036a7c29d9f42], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_e6d4d3215c30992a]));
          }

          FieldVector2D FieldVector2D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getZero_9fe036a7c29d9f42], a0.this$));
          }

          jint FieldVector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean FieldVector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
          }

          jboolean FieldVector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          FieldVector2D FieldVector2D::negate() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_negate_1f4b20c9530c3106]));
          }

          FieldVector2D FieldVector2D::normalize() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_normalize_1f4b20c9530c3106]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::orientation(const FieldVector2D & a0, const FieldVector2D & a1, const FieldVector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_orientation_1b7e5cf328ba7c9d], a0.this$, a1.this$, a2.this$));
          }

          FieldVector2D FieldVector2D::scalarMultiply(jdouble a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_d585e03ae746190d], a0));
          }

          FieldVector2D FieldVector2D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8343509e74a2a7e1], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_5e94b047a6786e99], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_c7bae57a1efc1bdd], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_7848c18b62deaa43], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_89098438b575a3c6], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_04e0d6e6888c483a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_aa6e21563b39f139], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector2D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_01c7d10e96d5cf94]));
          }

          ::java::lang::String FieldVector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::java::lang::String FieldVector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D FieldVector2D::toVector2D() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toVector2D_6d781af269bebe5e]));
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
          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args);
          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data);
          static PyGetSetDef t_FieldVector2D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector2D, infinite),
            DECLARE_GET_FIELD(t_FieldVector2D, naN),
            DECLARE_GET_FIELD(t_FieldVector2D, norm),
            DECLARE_GET_FIELD(t_FieldVector2D, norm1),
            DECLARE_GET_FIELD(t_FieldVector2D, normInf),
            DECLARE_GET_FIELD(t_FieldVector2D, normSq),
            DECLARE_GET_FIELD(t_FieldVector2D, x),
            DECLARE_GET_FIELD(t_FieldVector2D, y),
            DECLARE_GET_FIELD(t_FieldVector2D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector2D__methods_[] = {
            DECLARE_METHOD(t_FieldVector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toVector2D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector2D)[] = {
            { Py_tp_methods, t_FieldVector2D__methods_ },
            { Py_tp_init, (void *) t_FieldVector2D_init_ },
            { Py_tp_getset, t_FieldVector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector2D, t_FieldVector2D, FieldVector2D);
          PyObject *t_FieldVector2D::wrap_Object(const FieldVector2D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector2D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector2D), &PY_TYPE_DEF(FieldVector2D), module, "FieldVector2D", 0);
          }

          void t_FieldVector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "class_", make_descriptor(FieldVector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "wrapfn_", make_descriptor(t_FieldVector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector2D::initializeClass, 1)))
              return NULL;
            return t_FieldVector2D::wrap_Object(FieldVector2D(((t_FieldVector2D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_, &a6, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a7((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNaN(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNegativeInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPositiveInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getZero(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector2D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::orientation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector2D());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiElliptic::class$ = NULL;
          jmethodID *FieldJacobiElliptic::mids$ = NULL;
          bool FieldJacobiElliptic::live$ = false;

          jclass FieldJacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_cc0a3d6abf820939] = env->getMethodID(cls, "arccd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccd_d3398190482814dc] = env->getMethodID(cls, "arccd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_cc0a3d6abf820939] = env->getMethodID(cls, "arccn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_d3398190482814dc] = env->getMethodID(cls, "arccn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_cc0a3d6abf820939] = env->getMethodID(cls, "arccs", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_d3398190482814dc] = env->getMethodID(cls, "arccs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_cc0a3d6abf820939] = env->getMethodID(cls, "arcdc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_d3398190482814dc] = env->getMethodID(cls, "arcdc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_cc0a3d6abf820939] = env->getMethodID(cls, "arcdn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_d3398190482814dc] = env->getMethodID(cls, "arcdn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_cc0a3d6abf820939] = env->getMethodID(cls, "arcds", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_d3398190482814dc] = env->getMethodID(cls, "arcds", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_cc0a3d6abf820939] = env->getMethodID(cls, "arcnc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_d3398190482814dc] = env->getMethodID(cls, "arcnc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_cc0a3d6abf820939] = env->getMethodID(cls, "arcnd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_d3398190482814dc] = env->getMethodID(cls, "arcnd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_cc0a3d6abf820939] = env->getMethodID(cls, "arcns", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_d3398190482814dc] = env->getMethodID(cls, "arcns", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_cc0a3d6abf820939] = env->getMethodID(cls, "arcsc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_d3398190482814dc] = env->getMethodID(cls, "arcsc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_cc0a3d6abf820939] = env->getMethodID(cls, "arcsd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_d3398190482814dc] = env->getMethodID(cls, "arcsd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_cc0a3d6abf820939] = env->getMethodID(cls, "arcsn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_d3398190482814dc] = env->getMethodID(cls, "arcsn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getM_e6d4d3215c30992a] = env->getMethodID(cls, "getM", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_valuesC_0cee6f629437c057] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesC_3e2e02459e6d37e5] = env->getMethodID(cls, "valuesC", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesD_ca981450ec333cd6] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesD_0e2996d9d74d5631] = env->getMethodID(cls, "valuesD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesN_0fab261c4b5af5e5] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesN_56233df45962ca97] = env->getMethodID(cls, "valuesN", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesS_1a35a69e6b267eaf] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");
              mids$[mid_valuesS_c6c84f74840649de] = env->getMethodID(cls, "valuesS", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_cc0a3d6abf820939], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::getM() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM_e6d4d3215c30992a]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_0cee6f629437c057], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_3e2e02459e6d37e5], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_ca981450ec333cd6], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_0e2996d9d74d5631], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_0fab261c4b5af5e5], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_56233df45962ca97], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_1a35a69e6b267eaf], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_c6c84f74840649de], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self);
          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data);
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data);
          static PyGetSetDef t_FieldJacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, m),
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccs, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcds, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcns, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesC, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesD, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesN, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiElliptic)[] = {
            { Py_tp_methods, t_FieldJacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldJacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiElliptic, t_FieldJacobiElliptic, FieldJacobiElliptic);
          PyObject *t_FieldJacobiElliptic::wrap_Object(const FieldJacobiElliptic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiElliptic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiElliptic), &PY_TYPE_DEF(FieldJacobiElliptic), module, "FieldJacobiElliptic", 0);
          }

          void t_FieldJacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "class_", make_descriptor(FieldJacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "wrapfn_", make_descriptor(t_FieldJacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiElliptic::wrap_Object(FieldJacobiElliptic(((t_FieldJacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getM());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", args);
            return NULL;
          }
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getM());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "java/io/IOException.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCHatEpsilonReader::class$ = NULL;
          jmethodID *FESCHatEpsilonReader::mids$ = NULL;
          bool FESCHatEpsilonReader::live$ = false;

          jclass FESCHatEpsilonReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCHatEpsilonReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70b74fdcff2ed68a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;Ljava/util/Map;)V");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCHatEpsilonReader::FESCHatEpsilonReader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a3, const ::java::util::Map & a4) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_70b74fdcff2ed68a, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          void FESCHatEpsilonReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args);

          static PyMethodDef t_FESCHatEpsilonReader__methods_[] = {
            DECLARE_METHOD(t_FESCHatEpsilonReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCHatEpsilonReader)[] = {
            { Py_tp_methods, t_FESCHatEpsilonReader__methods_ },
            { Py_tp_init, (void *) t_FESCHatEpsilonReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCHatEpsilonReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCHatEpsilonReader, t_FESCHatEpsilonReader, FESCHatEpsilonReader);

          void t_FESCHatEpsilonReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCHatEpsilonReader), &PY_TYPE_DEF(FESCHatEpsilonReader), module, "FESCHatEpsilonReader", 0);
          }

          void t_FESCHatEpsilonReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "class_", make_descriptor(FESCHatEpsilonReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "wrapfn_", make_descriptor(t_FESCHatEpsilonReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCHatEpsilonReader::initializeClass, 1)))
              return NULL;
            return t_FESCHatEpsilonReader::wrap_Object(FESCHatEpsilonReader(((t_FESCHatEpsilonReader *) arg)->object.this$));
          }
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCHatEpsilonReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::Map a4((jobject) NULL);
            PyTypeObject **p4;
            FESCHatEpsilonReader object((jobject) NULL);

            if (!parseArgs(args, "sDDKK", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_, &a4, &p4, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FESCHatEpsilonReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCHatEpsilonReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateSolver::class$ = NULL;
        jmethodID *AbstractUnivariateSolver::mids$ = NULL;
        bool AbstractUnivariateSolver::live$ = false;

        jclass AbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateSolver, t_AbstractUnivariateSolver, AbstractUnivariateSolver);
        PyObject *t_AbstractUnivariateSolver::wrap_Object(const AbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateSolver), &PY_TYPE_DEF(AbstractUnivariateSolver), module, "AbstractUnivariateSolver", 0);
        }

        void t_AbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "class_", make_descriptor(AbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateSolver::wrap_Object(AbstractUnivariateSolver(((t_AbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station$ReferenceSystem::class$ = NULL;
        jmethodID *Station$ReferenceSystem::mids$ = NULL;
        bool Station$ReferenceSystem::live$ = false;
        Station$ReferenceSystem *Station$ReferenceSystem::UNE = NULL;
        Station$ReferenceSystem *Station$ReferenceSystem::XYZ = NULL;

        jclass Station$ReferenceSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station$ReferenceSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccRefSystem_5d440375deb99547] = env->getStaticMethodID(cls, "getEccRefSystem", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_valueOf_5d440375deb99547] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_values_2f429feb517a9691] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sinex/Station$ReferenceSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            UNE = new Station$ReferenceSystem(env->getStaticObjectField(cls, "UNE", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            XYZ = new Station$ReferenceSystem(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station$ReferenceSystem Station$ReferenceSystem::getEccRefSystem(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_getEccRefSystem_5d440375deb99547], a0.this$));
        }

        ::java::lang::String Station$ReferenceSystem::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        Station$ReferenceSystem Station$ReferenceSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5d440375deb99547], a0.this$));
        }

        JArray< Station$ReferenceSystem > Station$ReferenceSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Station$ReferenceSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_2f429feb517a9691]));
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
      namespace sinex {
        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self);
        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type);
        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data);
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data);
        static PyGetSetDef t_Station$ReferenceSystem__fields_[] = {
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, name),
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station$ReferenceSystem__methods_[] = {
          DECLARE_METHOD(t_Station$ReferenceSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getEccRefSystem, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getName, METH_NOARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station$ReferenceSystem)[] = {
          { Py_tp_methods, t_Station$ReferenceSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Station$ReferenceSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station$ReferenceSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Station$ReferenceSystem, t_Station$ReferenceSystem, Station$ReferenceSystem);
        PyObject *t_Station$ReferenceSystem::wrap_Object(const Station$ReferenceSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Station$ReferenceSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Station$ReferenceSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(Station$ReferenceSystem), &PY_TYPE_DEF(Station$ReferenceSystem), module, "Station$ReferenceSystem", 0);
        }

        void t_Station$ReferenceSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "class_", make_descriptor(Station$ReferenceSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "wrapfn_", make_descriptor(t_Station$ReferenceSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(Station$ReferenceSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "UNE", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::UNE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "XYZ", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::XYZ)));
        }

        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station$ReferenceSystem::initializeClass, 1)))
            return NULL;
          return t_Station$ReferenceSystem::wrap_Object(Station$ReferenceSystem(((t_Station$ReferenceSystem *) arg)->object.this$));
        }
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station$ReferenceSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::getEccRefSystem(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::valueOf(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type)
        {
          JArray< Station$ReferenceSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::values());
          return JArray<jobject>(result.this$).wrap(t_Station$ReferenceSystem::wrap_jobject);
        }
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GillFieldIntegratorBuilder::class$ = NULL;
        jmethodID *GillFieldIntegratorBuilder::mids$ = NULL;
        bool GillFieldIntegratorBuilder::live$ = false;

        jclass GillFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator GillFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_GillFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_GillFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegratorBuilder, t_GillFieldIntegratorBuilder, GillFieldIntegratorBuilder);
        PyObject *t_GillFieldIntegratorBuilder::wrap_Object(const GillFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegratorBuilder), &PY_TYPE_DEF(GillFieldIntegratorBuilder), module, "GillFieldIntegratorBuilder", 0);
        }

        void t_GillFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "class_", make_descriptor(GillFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_GillFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegratorBuilder::wrap_Object(GillFieldIntegratorBuilder(((t_GillFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
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

        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(GillFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
